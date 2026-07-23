/*
 * XREFs of SymCryptModulusCreate @ 0x1405218E4
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14051F184 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F310 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14053111C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
