/*
 * XREFs of PopEvaluateInputSuppressionRequired @ 0x140C305FC
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 */

__int64 PopEvaluateInputSuppressionRequired()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  result = (unsigned int)PopPlatformAoAcCapabilityInitialized;
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
  {
    if ( PopLidStateForInputSuppressionOverride != -1 )
      PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
    v1 = (unsigned int)Feature_AggressiveInputSuppression__private_featureState;
    if ( (Feature_AggressiveInputSuppression__private_featureState & 0x10) == 0 )
    {
      LODWORD(v1) = Feature_AggressiveInputSuppression__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_AggressiveInputSuppression__private_descriptor,
        Feature_AggressiveInputSuppression__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v1,
        3,
        (__int64)&Feature_AggressiveInputSuppression__private_descriptor);
    }
    PopInputSuppressionIgnorePowerSource = 1;
    LODWORD(v1) = 1;
    result = EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v1);
    if ( (_DWORD)v1 == 2 )
    {
      PopEnableInputSuppression = 1;
    }
    else
    {
      result = (unsigned int)PopEnableInputSuppressionOverride;
      PopEnableInputSuppression = 0;
      if ( PopEnableInputSuppressionOverride != -1 )
        PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
    }
  }
  return result;
}
