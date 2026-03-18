/*
 * XREFs of Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline @ 0x140098428
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     Feature_HandleIFlipConvertedTokens__private_IsEnabledFallback @ 0x140098460 (Feature_HandleIFlipConvertedTokens__private_IsEnabledFallback.c)
 */

__int64 Feature_HandleIFlipConvertedTokens__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HandleIFlipConvertedTokens__private_featureState & 0x10) != 0 )
    return Feature_HandleIFlipConvertedTokens__private_featureState & 1;
  else
    return Feature_HandleIFlipConvertedTokens__private_IsEnabledFallback(
             (unsigned int)Feature_HandleIFlipConvertedTokens__private_featureState,
             3LL);
}
