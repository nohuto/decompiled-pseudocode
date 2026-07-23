/*
 * XREFs of BiTranslateBootOrder @ 0x1409A8030
 * Callers:
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 * Callees:
 *     BiTranslateBootEntryId @ 0x1409A80C0 (BiTranslateBootEntryId.c)
 */

__int64 __fastcall BiTranslateBootOrder(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v10; // rbp
  int v11; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  if ( *a4 )
  {
    v10 = *a4;
    do
    {
      v11 = BiTranslateBootEntryId(a1, *a2++, a3 + 16LL * v4);
      if ( v11 >= 0 )
        ++v4;
      else
        v5 = -2147483635;
      --v10;
    }
    while ( v10 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
