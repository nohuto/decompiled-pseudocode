/*
 * XREFs of Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline @ 0x1405CF098
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407481A0 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407481E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopDispatchShutdownEvent @ 0x14074DDA0 (PopDispatchShutdownEvent.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C1DBAC (PopUserShutdownScenarioInitialize.c)
 * Callees:
 *     Feature_RsUserModeShutdown__private_IsEnabledFallback @ 0x1405CF0D0 (Feature_RsUserModeShutdown__private_IsEnabledFallback.c)
 */

__int64 Feature_RsUserModeShutdown__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RsUserModeShutdown__private_featureState & 0x10) != 0 )
    return Feature_RsUserModeShutdown__private_featureState & 1;
  else
    return Feature_RsUserModeShutdown__private_IsEnabledFallback(
             (unsigned int)Feature_RsUserModeShutdown__private_featureState,
             3LL);
}
