/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1404CBF20
 * Callers:
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D612C (wil_details_RegisterFeatureStagingChangeNotification.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x1406FB0B8 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetEffectiveIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 3221225659LL;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
}
