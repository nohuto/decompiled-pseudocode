/*
 * XREFs of Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline @ 0x1406A01A0
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     Feature_CodeIntegrity_EccSupport__private_IsEnabledFallback @ 0x1406A01D8 (Feature_CodeIntegrity_EccSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CodeIntegrity_EccSupport__private_featureState & 0x10) != 0 )
    return Feature_CodeIntegrity_EccSupport__private_featureState & 1;
  else
    return Feature_CodeIntegrity_EccSupport__private_IsEnabledFallback(
             (unsigned int)Feature_CodeIntegrity_EccSupport__private_featureState,
             3LL);
}
