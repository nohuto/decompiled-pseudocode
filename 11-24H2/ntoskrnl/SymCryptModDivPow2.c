/*
 * XREFs of SymCryptModDivPow2 @ 0x140523B7C
 * Callers:
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptFdefModDivPow2 @ 0x1405359F8 (SymCryptFdefModDivPow2.c)
 */

__int64 __fastcall SymCryptModDivPow2(__int64 a1, __int64 a2)
{
  return SymCryptFdefModDivPow2(a1, a2);
}
