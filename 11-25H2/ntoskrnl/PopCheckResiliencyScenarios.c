/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140A1E378
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404AC1B8 (PopCoalescingSetActiveState.c)
 *     PopCoalescingPowerSettingCallback @ 0x140744F60 (PopCoalescingPowerSettingCallback.c)
 *     PopDeepSleepPowerSettingCallback @ 0x14074DB10 (PopDeepSleepPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140A1E110 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A1E178 (PopPdcIdleResiliencyCallback.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x140A1E2C0 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140355CAC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopDeepSleepEnabled @ 0x140494C44 (PopDeepSleepEnabled.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1404B810C (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140F0B8D4 )
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
      if ( byte_140F0B8D4 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock, v5, v6);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
