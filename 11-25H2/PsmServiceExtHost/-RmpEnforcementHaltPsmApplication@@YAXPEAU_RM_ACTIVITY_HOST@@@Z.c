/*
 * XREFs of ?RmpEnforcementHaltPsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006FC64
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18005E83C (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800915B0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementHaltPsmApplication(struct _RM_ACTIVITY_HOST *a1)
{
  if ( (int)RmpSystemChangePsmApplicationState(a1, 2) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
}
