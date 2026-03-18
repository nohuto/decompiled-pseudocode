/*
 * XREFs of PopUserPresentSet @ 0x140476860
 * Callers:
 *     PoSetUserPresent @ 0x140476670 (PoSetUserPresent.c)
 *     PopSetSystemState @ 0x140476768 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4B90 (DbgkWerCaptureLiveKernelDump.c)
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
  if ( byte_140F0AE61 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( dword_140F0B714 )
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
