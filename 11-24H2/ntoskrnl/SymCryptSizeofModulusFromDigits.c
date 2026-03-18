/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x14052402C
 * Callers:
 *     SymCryptRsakeyCreate @ 0x140521830 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1405219BC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x140522290 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140522AF0 (SymCryptEcurveValidateAndComputeSizes.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140536E78 (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
