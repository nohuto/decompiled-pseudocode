/*
 * XREFs of SymCryptIntIsEqual @ 0x140523970
 * Callers:
 *     SymCryptEcurveIsSame @ 0x140522A18 (SymCryptEcurveIsSame.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntIsEqual @ 0x14053734C (SymCryptFdefIntIsEqual.c)
 */

__int64 SymCryptIntIsEqual()
{
  return SymCryptFdefIntIsEqual();
}
