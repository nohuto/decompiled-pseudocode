/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140A27318
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404ADA60 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x140751030 (PopCoalescingPowerSettingCallback.c)
 *     PopDeepSleepPowerSettingCallback @ 0x14075A090 (PopDeepSleepPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140A26E9C (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140A270B0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A27118 (PopPdcIdleResiliencyCallback.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x140A27260 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x140493A20 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404A673C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B7970 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // r8d

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140F0BB54 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140F0BB54 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock, v5, v6);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock(&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
