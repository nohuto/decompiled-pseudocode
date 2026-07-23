/*
 * XREFs of SymCryptIntIsEqual @ 0x140521288
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE5C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveIsSame @ 0x14052032C (SymCryptEcurveIsSame.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntIsEqual @ 0x1405317EC (SymCryptFdefIntIsEqual.c)
 */

__int64 SymCryptIntIsEqual()
{
  return SymCryptFdefIntIsEqual();
}
