/*
 * XREFs of SymCryptDigitsFromBits @ 0x140520FA0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x14051F0B0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14051FB10 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FC88 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140520370 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405292BC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140529D0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140529FF0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052B794 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefDecideModulusType @ 0x140532F18 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x14053484C (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}
