/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x14052E360
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140523BD8 (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x140523C54 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140523EBC (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
