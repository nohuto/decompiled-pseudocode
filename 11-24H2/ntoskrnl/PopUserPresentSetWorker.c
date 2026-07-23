/*
 * XREFs of PopUserPresentSetWorker @ 0x14048D0E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

void PopUserPresentSetWorker()
{
  KIRQL i; // al
  KIRQL v1; // bl
  unsigned int v2; // edi
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock); ; i = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock) )
  {
    v1 = i;
    if ( PopUserPresentSetStatus != 1 )
      break;
    v2 = PopUserPresentMonitorOnReason;
    PopUserPresentSetStatus = 2;
    KeReleaseSpinLock(&PopUserPresentLock, i);
    if ( byte_140F0B391 && !_InterlockedExchange(&dword_140F0B398, 1) )
    {
      PopAwayModeUserPresenceDpcObject.TargetInfoAsUlong = 275;
      PopAwayModeUserPresenceDpcObject.DeferredRoutine = PopAwayModeUserPresenceDpc;
      PopAwayModeUserPresenceDpcObject.DpcData = 0LL;
      PopAwayModeUserPresenceDpcObject.DeferredContext = &dword_140F0B398;
      PopAwayModeUserPresenceDpcObject.ProcessorHistory = 0LL;
      KiSetTimerEx(
        (__int64)&PopAwayModeUserPresenceTimer,
        -30000000LL,
        0,
        0,
        (__int64)&PopAwayModeUserPresenceDpcObject);
      PopAwaymodeExitReason = v2;
      PopSetNotificationWork(0x40u);
    }
    PopNotifyConsoleUserPresent(0LL, v2);
    if ( (PopFullWake & 3) == 0 )
    {
      _InterlockedOr(&PopFullWake, 3u);
      memset(v3, 0, 32);
      if ( PsWin32CalloutsEstablished )
      {
        PopInvokeWin32Callout(3LL, v3, 2LL);
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
      PopAcquirePolicyLock();
      PopUpdateSystemIdleContext(4LL);
      PopReleasePolicyLock();
    }
  }
  if ( dword_140F0B394 )
    KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  PopUserPresentSetStatus = 0;
  PopUserPresentMonitorOnReason = 0;
  KeReleaseSpinLock(&PopUserPresentLock, v1);
}
