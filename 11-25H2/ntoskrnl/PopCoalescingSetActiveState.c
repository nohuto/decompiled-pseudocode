/*
 * XREFs of PopCoalescingSetActiveState @ 0x1404AC1B8
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x140A73B20 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x1403A7FF4 (PopCoalescingSetTimer.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14074A730 (PopDiagTraceIoCoalescingOn.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A8FF7C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA3E84 (PopDiagTraceIoCoalescingOff.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
    PopUpdateDiskIdleTimeoutSetting();
    LOBYTE(v1) = PopCoalescingEnforced == 0;
    return PopDiagTraceIoCoalescingOn(v5, v4, v6, v1);
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
    PopUpdateDiskIdleTimeoutSetting();
    return PopDiagTraceIoCoalescingOff();
  }
}
