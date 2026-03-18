/*
 * XREFs of SymCryptFdef369ModPreGetMontgomery @ 0x140538CE0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptFdef369MontgomeryReduceAsm @ 0x140539AA0 (SymCryptFdef369MontgomeryReduceAsm.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void *__fastcall SymCryptFdef369ModPreGetMontgomery(__int64 a1, const void *a2, void *a3)
{
  int v3; // ebp
  size_t v6; // rdi

  v3 = *(_DWORD *)(a1 + 4);
  v6 = 4LL * (unsigned int)(6 * (v3 + 1));
  memmove(a3, a2, v6);
  SymCryptWipe((__int64)a3 + v6, v6);
  SymCryptFdef369MontgomeryReduceAsm(a1, a3, a3);
  SymCryptWipe((__int64)a3 + v6, (unsigned int)(v3 << 6) - v6);
  return a3;
}
