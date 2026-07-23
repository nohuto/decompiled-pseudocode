/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1800D4C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r11
  int v8; // esi
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  _DWORD *v17; // r8
  int v18; // eax

  v4 = a2;
  v6 = a2 - 2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  v7 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 20);
  if ( (v8 & 0xFFFFFFF8) != 0 )
    return 0LL;
  v9 = (int)a1[4];
  if ( *a1 > (int)v9 )
    return 0LL;
  if ( a1[1] + *a1 < (int)v9 + a1[5] )
    return 0LL;
  v10 = (char *)a1 + v9;
  if ( !(_DWORD *)((char *)a1 + v9) )
    return 0LL;
  if ( a4 )
  {
    if ( (v8 & 2) != 0 )
      v18 = *(_DWORD *)(a3 + 4 * v4 + 556);
    else
      v18 = *(_DWORD *)(a3 + 8 * v4 + 28);
    *a4 = v18;
  }
  if ( (*(_BYTE *)(a3 + 20) & 2) == 0 )
    return &v10[*(unsigned int *)(a3 + 8 * v4 + 24) - 512];
  v11 = *((_QWORD *)v10 + 1);
  if ( (v7 & v11) == 0 )
    return 0LL;
  v12 = *(_QWORD *)(a3 + 544);
  v13 = 576;
  if ( (unsigned int)v4 > 2 )
  {
    v15 = 4LL;
    v16 = v6;
    v17 = (_DWORD *)(a3 + 564);
    do
    {
      if ( (v15 & v11) != 0 )
      {
        if ( (v15 & v12) != 0 )
          v13 = (v13 + 63) & 0xFFFFFFC0;
        v13 += *v17;
      }
      v15 = __ROL8__(v15, 1);
      ++v17;
      --v16;
    }
    while ( v16 );
  }
  if ( (v7 & v12) != 0 )
    v13 = (v13 + 63) & 0xFFFFFFC0;
  return &v10[v13 - 512];
}
