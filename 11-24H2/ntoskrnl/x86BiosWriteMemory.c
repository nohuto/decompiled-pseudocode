/*
 * XREFs of x86BiosWriteMemory @ 0x140544140
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 */

__int64 __fastcall x86BiosWriteMemory(unsigned __int16 a1, unsigned __int16 a2, char *a3, int a4)
{
  int v5; // ebx
  unsigned __int16 v6; // di
  int *v9; // rax
  char v10; // cl

  v5 = a4;
  v6 = a2;
  if ( a2 + a4 + 16 * (unsigned int)a1 > 0x100000 )
    return 3221225485LL;
  _mm_lfence();
  if ( a4 )
  {
    do
    {
      v9 = x86BiosTranslateAddress(a1, v6);
      v10 = *a3;
      ++v6;
      ++a3;
      *(_BYTE *)v9 = v10;
      --v5;
    }
    while ( v5 );
  }
  return 0LL;
}
