/*
 * XREFs of SymCryptFdefDigitsFromBits @ 0x14053149C
 * Callers:
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefDigitsFromBits(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a1 <= 0x100000 )
    return (a1 >> 9) + (((a1 & 0x1FF) + 511) >> 9);
  return result;
}
