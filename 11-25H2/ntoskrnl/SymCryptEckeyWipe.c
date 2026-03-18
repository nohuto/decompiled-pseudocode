/*
 * XREFs of SymCryptEckeyWipe @ 0x140520C50
 * Callers:
 *     SymCryptEckeyFree @ 0x140520654 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520C7C (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
