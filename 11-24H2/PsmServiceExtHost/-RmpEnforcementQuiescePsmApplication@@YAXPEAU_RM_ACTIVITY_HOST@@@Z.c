/*
 * XREFs of ?RmpEnforcementQuiescePsmApplication@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C398
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18005E7BC (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 */

void __fastcall RmpEnforcementQuiescePsmApplication(struct _RM_ACTIVITY_HOST *a1)
{
  if ( (int)RmpSystemChangePsmApplicationState(a1, 1LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
}
