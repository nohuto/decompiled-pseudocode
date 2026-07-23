/*
 * XREFs of longest_match @ 0x180152B5C
 * Callers:
 *     deflate_fast @ 0x180151240 (deflate_fast.c)
 *     deflate_slow @ 0x180151BF0 (deflate_slow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall longest_match(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // r12
  unsigned int v6; // edx
  __int64 v7; // r11
  unsigned int v8; // r15d
  int v9; // ecx
  _BYTE *v10; // rbp
  _BYTE *v11; // r8
  unsigned int v12; // r9d
  _BYTE *v13; // rdi
  char v14; // r13
  unsigned int v15; // esi
  unsigned int v16; // edx
  _BYTE *v17; // rcx
  _BYTE *v18; // r8
  _BYTE *v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // ecx
  char v24; // [rsp+38h] [rbp+10h]

  v2 = *(unsigned int *)(a1 + 228);
  v4 = *(_QWORD *)(a1 + 160);
  v6 = *(_DWORD *)(a1 + 244);
  v7 = *(int *)(a1 + 240);
  v8 = *(_DWORD *)(a1 + 264);
  v9 = *(_DWORD *)(a1 + 148);
  v10 = (_BYTE *)(v2 + v4);
  v11 = (_BYTE *)(v2 + v4);
  if ( (unsigned int)v2 <= v9 - 262 )
    v12 = 0;
  else
    v12 = v2 - v9 + 262;
  v13 = v10 + 258;
  v14 = v10[v7 - 1];
  v15 = v6 >> 2;
  v24 = v10[v7];
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 260) )
    v15 = v6;
  v16 = *(_DWORD *)(a1 + 236);
  if ( v8 > v16 )
    v8 = *(_DWORD *)(a1 + 236);
  do
  {
    v17 = (_BYTE *)(a2 + v4);
    v4 = *(_QWORD *)(a1 + 160);
    if ( v17[(int)v7] == v24 && v17[(int)v7 - 1] == v14 && *v17 == *v11 && v17[1] == v11[1] )
    {
      v18 = v11 + 2;
      v19 = v17 + 2;
      do
      {
        if ( *++v18 != v19[1] )
          break;
        if ( *++v18 != v19[2] )
          break;
        if ( *++v18 != v19[3] )
          break;
        if ( *++v18 != v19[4] )
          break;
        if ( *++v18 != v19[5] )
          break;
        if ( *++v18 != v19[6] )
          break;
        if ( *++v18 != v19[7] )
          break;
        v19 += 8;
        if ( *++v18 != *v19 )
          break;
      }
      while ( v18 < v13 );
      v20 = (_DWORD)v18 - (_DWORD)v13;
      v21 = v20;
      v22 = v20 + 258;
      v11 = v10;
      if ( v22 > (int)v7 )
      {
        *(_DWORD *)(a1 + 232) = a2;
        LODWORD(v7) = v22;
        if ( v22 >= (int)v8 )
          break;
        v14 = v13[v21 - 1];
        v24 = v10[v22];
      }
    }
    a2 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 176) + 2LL * (a2 & *(_DWORD *)(a1 + 156)));
    if ( a2 <= v12 )
      break;
    --v15;
  }
  while ( v15 );
  if ( (unsigned int)v7 <= v16 )
    return (unsigned int)v7;
  return v16;
}
