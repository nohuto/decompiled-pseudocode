/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x140531318
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x140521944 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x14053111C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140531B48 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return ((_DWORD)a1 << 7) + 64 + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
