/*
 * XREFs of sub_14003382C @ 0x14003382C
 * Callers:
 *     sub_1400327D4 @ 0x1400327D4 (sub_1400327D4.c)
 * Callees:
 *     sub_140008CB4 @ 0x140008CB4 (sub_140008CB4.c)
 *     sub_14000CA84 @ 0x14000CA84 (sub_14000CA84.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 */

__int64 __fastcall sub_14003382C(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ecx
  _WORD *v7; // rbp
  _WORD *v8; // rax
  unsigned __int64 v9; // rcx
  int i; // edx
  __int64 result; // rax
  int v12; // edx
  __int16 v13; // r14
  __int64 Pool2; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r9d
  char *v18; // r11
  __int64 *v19; // rax
  int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // rax

  v5 = 3LL * a2;
  *(_DWORD *)(a3 + 24) = a1[6 * a2 + 3];
  v6 = a1[6 * a2 + 4];
  v7 = (_WORD *)((char *)a1 + v6);
  if ( !v7 )
    return 3221225485LL;
  v8 = (_WORD *)((char *)a1 + v6);
  v9 = (unsigned __int64)(*a1 - v6) >> 1;
  for ( i = v9; v9; --v9 )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  result = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
    v12 = i - v9;
  else
    v12 = 0;
  if ( v9 )
  {
    v13 = 2 * v12 + 2;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * v12 + 2), 1919119952LL);
    *(_QWORD *)(a3 + 8) = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_WORD *)(a3 + 2) = v13;
    result = sub_14000CA84((unsigned __int16 *)a3, v7);
    if ( (int)result >= 0 )
    {
      v15 = a1[2 * v5 + 6];
      *(_DWORD *)(a3 + 28) = v15;
      if ( v15 )
      {
        v16 = ExAllocatePool2(64LL, 4LL * (unsigned int)a1[2 * v5 + 6], 1919119952LL);
        *(_QWORD *)(a3 + 32) = v16;
        if ( !v16 )
          return 3221225626LL;
        v17 = 0;
        v18 = (char *)a1 + (unsigned int)a1[2 * v5 + 7];
        while ( v17 < a1[2 * v5 + 6] )
        {
          v19 = sub_140008CB4(*(_DWORD *)&v18[4 * v17]);
          if ( v19 )
          {
            *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v21) = *((_DWORD *)v19 + 14);
          }
          else
          {
            if ( dword_140019A64 <= (unsigned int)dword_140019154 )
              return 3221226021LL;
            *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v21) = -1;
          }
          v17 = v20 + 1;
        }
      }
      v22 = (unsigned int)a1[2 * v5 + 5];
      if ( !(_DWORD)v22 )
        return 0LL;
      result = sub_140032E50((__int64)a1 + v22, *(const wchar_t **)(a3 + 8), 1, (_QWORD *)(a3 + 16));
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
