/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x140535E30
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x14052156C (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1405217D4 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsNegate(__int64 a1)
{
  _DWORD *v1; // r15

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  SymCryptModElementMaskedCopy();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
