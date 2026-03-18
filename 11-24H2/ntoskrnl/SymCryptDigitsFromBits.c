/*
 * XREFs of SymCryptDigitsFromBits @ 0x140523724
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x140521830 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x140522290 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x140522408 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140522AF0 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x14052BA6C (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14052C4BC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x14052C7A0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052DF44 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefDecideModulusType @ 0x1405356C8 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x140536FFC (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}
