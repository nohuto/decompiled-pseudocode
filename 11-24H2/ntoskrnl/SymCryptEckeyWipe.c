/*
 * XREFs of SymCryptEckeyWipe @ 0x1405233D0
 * Callers:
 *     SymCryptEckeyFree @ 0x140522DD4 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1405233FC (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
