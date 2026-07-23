/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140AA7080
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B2150 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140AA710C (PopEnforceDeepSleep.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  int v4; // ecx

  PopEnforceDeepSleep((unsigned int)a1[1]);
  PpmAcquireLock(&PopFxSystemLatencyLock, v2, v3);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v4 = *a1;
  if ( *a1 )
  {
    if ( PopCurrentCoalescingSpindownTimeout )
      return;
    PopCoalescingState |= 2u;
    PopCoalescingEnforced = 1;
    PopEnforcedCoalescingSpindownTimeout = v4;
    goto LABEL_7;
  }
  if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopCoalescingState &= ~2u;
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingEnforced = 0;
LABEL_7:
    PopEnsureCoalescingWorkerWillRun();
  }
}
