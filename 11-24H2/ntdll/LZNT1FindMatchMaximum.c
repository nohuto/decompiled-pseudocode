/*
 * XREFs of LZNT1FindMatchMaximum @ 0x1800DDA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchMaximum(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  unsigned int v8; // eax
  _BYTE *v9; // rdx

  v2 = *(_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 16);
  v6 = 0;
  if ( *(_QWORD *)a2 >= (unsigned __int64)a1 )
    return 0LL;
  v7 = v2 - (_QWORD)a1;
  do
  {
    v8 = 0;
    if ( v5 )
    {
      v9 = a1;
      do
      {
        if ( (unsigned __int64)&a1[v8] >= v3 )
          break;
        if ( *v9 != v9[v7] )
          break;
        ++v8;
        ++v9;
      }
      while ( v8 < v5 );
    }
    if ( v8 >= v6 )
    {
      v6 = v8;
      *(_QWORD *)(a2 + 24) = v2;
    }
    ++v2;
    ++v7;
  }
  while ( v2 < (unsigned __int64)a1 );
  if ( v6 < 3 )
    return 0;
  return v6;
}
