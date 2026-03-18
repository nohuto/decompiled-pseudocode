/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x14052BE70
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140523BD8 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x140523C54 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140523EBC (SymCryptModNeg.c)
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
