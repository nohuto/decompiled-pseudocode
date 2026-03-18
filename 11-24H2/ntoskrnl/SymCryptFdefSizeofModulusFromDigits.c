/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x140536E78
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x14052402C (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x140536C7C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x1405376A8 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return ((_DWORD)a1 << 7) + 64 + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
