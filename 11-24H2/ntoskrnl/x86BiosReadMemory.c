/*
 * XREFs of x86BiosReadMemory @ 0x140460A20
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 */

__int64 __fastcall x86BiosReadMemory(unsigned __int16 a1, unsigned __int16 a2, _BYTE *a3, int a4)
{
  int v5; // ebx
  unsigned __int16 v6; // di
  _BYTE *v9; // rax

  v5 = a4;
  v6 = a2;
  if ( a2 + a4 + 16 * (unsigned int)a1 > 0x100000 )
    return 3221225485LL;
  _mm_lfence();
  if ( a4 )
  {
    do
    {
      v9 = (_BYTE *)x86BiosTranslateAddress(a1, v6++);
      *a3++ = *v9;
      --v5;
    }
    while ( v5 );
  }
  return 0LL;
}
