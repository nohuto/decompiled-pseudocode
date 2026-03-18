/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CC0F0
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407C69CC (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406EF278 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( ObGetCurrentIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 3221225659LL;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
}
