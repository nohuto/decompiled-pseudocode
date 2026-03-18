/*
 * XREFs of SymCryptFdefModMulMontgomery @ 0x1405365B0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul @ 0x14052F664 (SymCryptFdefRawMul.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140536E20 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomery(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMul(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduce(a1, a5, a4);
}
