/*
 * XREFs of SymCryptModNeg @ 0x1405217D4
 * Callers:
 *     SymCryptShortWeierstrassIsEqual @ 0x140534CC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x140534F70 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140535BB0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x140535E30 (SymCryptTwistedEdwardsNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400067F0 + (*a1 & 0x380)))(a1);
}
