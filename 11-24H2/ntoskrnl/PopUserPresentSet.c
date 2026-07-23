/*
 * XREFs of PopUserPresentSet @ 0x1403E6990
 * Callers:
 *     PoSetUserPresent @ 0x1403E67A0 (PoSetUserPresent.c)
 *     PopSetSystemState @ 0x1403E6898 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  KIRQL v2; // bl
  KIRQL v3; // al
  int v4; // ebx

  if ( (PopSimulate & 0x40000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    v4 = PopUserPresentSetStatus;
    KeReleaseSpinLock(&PopUserPresentLock, v3);
    DbgkWerCaptureLiveKernelDump((unsigned int)L"UserPresenceSet", 160, 273, v4, PopFullWake, 0LL, 0LL, 0LL, 0);
  }
  if ( byte_140F0B981 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( dword_140F0B394 )
    {
      if ( !PopUserPresentSetStatus )
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      KeReleaseSpinLock(&PopUserPresentLock, v2);
    }
    else
    {
      PopUserPresentMonitorOnReason = a1;
      if ( !PopUserPresentSetStatus )
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      PopUserPresentSetStatus = 1;
      KeReleaseSpinLock(&PopUserPresentLock, v2);
      if ( PopIdleScanInterval )
      {
        _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
        PopGetPolicyWorker(128LL);
        PopCheckForWork();
      }
    }
  }
}
