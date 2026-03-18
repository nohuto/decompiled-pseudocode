/*
 * XREFs of PopUserPresentSet @ 0x1403F2C70
 * Callers:
 *     PoSetUserPresent @ 0x1403F2A80 (PoSetUserPresent.c)
 *     PopSetSystemState @ 0x1403F2B78 (PopSetSystemState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA9B20 (DbgkWerCaptureLiveKernelDump.c)
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
  if ( byte_140F0B101 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( dword_140F0BA54 )
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
