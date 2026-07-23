/*
 * XREFs of SymCryptFdef369ModSetPostMontgomery @ 0x140533220
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdef369RawMulAsm @ 0x1405371C0 (SymCryptFdef369RawMulAsm.c)
 *     SymCryptFdef369MontgomeryReduceAsm @ 0x1405372E0 (SymCryptFdef369MontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdef369ModSetPostMontgomery(__int64 a1, __int64 a2, __int64 a3)
{
  SymCryptFdef369RawMulAsm(a2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 4), a3);
  return SymCryptFdef369MontgomeryReduceAsm(a1, a3, a2);
}
