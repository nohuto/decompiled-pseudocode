/*
 * XREFs of SymCryptFdefModPreGetMontgomery256 @ 0x140530C80
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefMontgomeryReduce256Asm @ 0x140532F60 (SymCryptFdefMontgomeryReduce256Asm.c)
 */

_OWORD *__fastcall SymCryptFdefModPreGetMontgomery256(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  *a3 = *a2;
  a3[1] = a2[1];
  a3[2] = a2[2];
  a3[3] = a2[3];
  SymCryptFdefMontgomeryReduce256Asm(a1, a3, a3);
  return a3;
}
