/*
 * XREFs of SymCryptEckeyWipe @ 0x140520CE8
 * Callers:
 *     SymCryptEckeyFree @ 0x1405206E8 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520D14 (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
