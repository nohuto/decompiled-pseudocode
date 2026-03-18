/*
 * XREFs of SymCryptFdefSizeofDivisorFromDigits @ 0x1405376A8
 * Callers:
 *     SymCryptSizeofDivisorFromDigits @ 0x140523FE4 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFdefModulusCopyFixupMontgomery @ 0x140536C50 (SymCryptFdefModulusCopyFixupMontgomery.c)
 *     SymCryptFdefModulusInitMontgomeryInternal @ 0x140536D50 (SymCryptFdefModulusInitMontgomeryInternal.c)
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140536E78 (SymCryptFdefSizeofModulusFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofDivisorFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 + 1) << 6);
}
