/*
 * XREFs of SymCryptFdefModSquareMontgomery @ 0x140530F50
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquare @ 0x140529C58 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1405312C0 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquare(a2, *(_DWORD *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduce(a1, a4, a3);
}
