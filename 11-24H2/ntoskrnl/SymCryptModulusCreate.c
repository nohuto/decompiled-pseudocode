/*
 * XREFs of SymCryptModulusCreate @ 0x140523FCC
 * Callers:
 *     SymCryptRsakeyCreate @ 0x140521830 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1405219BC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x140536C7C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
