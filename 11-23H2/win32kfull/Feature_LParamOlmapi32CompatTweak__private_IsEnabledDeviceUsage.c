/*
 * XREFs of Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C0139E50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C0139E88 (Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 */

__int64 Feature_LParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_LParamOlmapi32CompatTweak__private_featureState & 0x10) != 0 )
    return Feature_LParamOlmapi32CompatTweak__private_featureState & 1;
  else
    return Feature_LParamOlmapi32CompatTweak__private_IsEnabledFallback(
             (unsigned int)Feature_LParamOlmapi32CompatTweak__private_featureState,
             3LL);
}
