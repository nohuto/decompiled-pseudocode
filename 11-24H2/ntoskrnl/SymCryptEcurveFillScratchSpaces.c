/*
 * XREFs of SymCryptEcurveFillScratchSpaces @ 0x140528DC0
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveFillScratchSpaces(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006CF0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}
