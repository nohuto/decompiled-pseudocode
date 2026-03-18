/*
 * XREFs of PopCoalescingSetActiveState @ 0x1404ADA60
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x140A75E00 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopCoalescingSetTimer @ 0x1402CA544 (PopCoalescingSetTimer.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1407567E4 (PopDiagTraceIoCoalescingOn.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409BA840 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140AA8F0C (PopDiagTraceIoCoalescingOff.c)
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
