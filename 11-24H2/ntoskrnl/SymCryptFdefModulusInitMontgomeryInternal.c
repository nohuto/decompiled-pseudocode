/*
 * XREFs of SymCryptFdefModulusInitMontgomeryInternal @ 0x1405311F0
 * Callers:
 *     SymCryptFdefModulusInitMontgomery @ 0x1405311A0 (SymCryptFdefModulusInitMontgomery.c)
 *     SymCryptFdefModulusInitMontgomery256 @ 0x1405311D0 (SymCryptFdefModulusInitMontgomery256.c)
 *     SymCryptFdef369ModulusInitMontgomery @ 0x140533360 (SymCryptFdef369ModulusInitMontgomery.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptFdefRawDivMod @ 0x140529820 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawNeg @ 0x140529C18 (SymCryptFdefRawNeg.c)
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140531B48 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefModulusInitMontgomeryInternal(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r15d
  void *v7; // rbp

  v3 = *(_DWORD *)(a1 + 4);
  v7 = (void *)((unsigned int)SymCryptFdefSizeofDivisorFromDigits(v3) + a1 + 64);
  *(_QWORD *)(a1 + 40) = v7;
  SymCryptWipe((__int64)a3, (v3 << 7) + 64);
  a3[2 * a2] = 1;
  SymCryptFdefRawDivMod(a3, 2 * v3 + 1, (_DWORD *)(a1 + 64), 0LL, v7, &a3[32 * v3 + 16]);
  return SymCryptFdefRawNeg(a1 + 128, 0, (_DWORD *)v7 + 16 * v3, v3);
}
