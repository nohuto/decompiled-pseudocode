/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x140521944
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14051F184 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F310 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14051FBD4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140520404 (SymCryptEcurveValidateAndComputeSizes.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140531318 (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
