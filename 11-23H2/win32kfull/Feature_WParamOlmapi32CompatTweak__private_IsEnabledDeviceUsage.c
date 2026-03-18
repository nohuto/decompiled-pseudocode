/*
 * XREFs of Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C0139EF8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C0139F30 (Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 */

__int64 Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WParamOlmapi32CompatTweak__private_featureState & 0x10) != 0 )
    return Feature_WParamOlmapi32CompatTweak__private_featureState & 1;
  else
    return Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback(
             (unsigned int)Feature_WParamOlmapi32CompatTweak__private_featureState,
             3LL);
}
