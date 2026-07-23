/*
 * XREFs of LdrpEventAddUnicodeString @ 0x1800D4D60
 * Callers:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpEventAddUnicodeString(__int64 a1, _WORD *a2, unsigned int a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // r10
  __int16 v11; // ax
  _WORD *v12; // rax
  int v13; // edx
  int v14; // eax
  int v15; // r11d
  __int64 result; // rax

  v4 = 0;
  if ( a1 && *(_WORD *)a1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (unsigned __int64)a3 >> 1;
    if ( v7 )
    {
      v8 = (unsigned __int64)a3 >> 1;
      v9 = 0;
      v10 = v6 - (_QWORD)a2;
      do
      {
        if ( !(2147483646 - v7 + v8) )
          break;
        v11 = *(_WORD *)((char *)a2 + v10);
        if ( !v11 )
          break;
        *a2 = v11;
        ++v9;
        ++a2;
        --v8;
      }
      while ( v8 );
      v12 = a2 - 1;
      if ( v8 )
        v12 = a2;
      v13 = -2147483643;
      if ( v8 )
        v13 = 0;
      *v12 = 0;
      v14 = v9 - 1;
      if ( v8 )
        v14 = v9;
      v15 = v7 - v14;
      if ( ((v13 + 0x80000000) & 0x80000000) != 0 || v13 == -2147483643 )
        v4 = v15;
    }
    result = a3 + 2 * (1 - v4);
    *a4 = result;
  }
  else
  {
    if ( a3 >= 2 )
    {
      result = 2LL;
      *a2 = 0;
    }
    else
    {
      result = 0LL;
    }
    *a4 = result;
  }
  return result;
}
