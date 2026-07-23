/*
 * XREFs of RtlLocateExtendedFeature2 @ 0x1403F5C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateExtendedFeature2(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // r9
  char *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  int v17; // eax

  if ( a2 - 2 > 0x3D )
    return 0LL;
  v6 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  v7 = *(_DWORD *)(a3 + 20);
  if ( (v7 & 0xFFFFFFF8) != 0 )
    return 0LL;
  v8 = (int)a1[4];
  if ( *a1 > (int)v8 )
    return 0LL;
  if ( a1[1] + *a1 < (int)v8 + a1[5] )
    return 0LL;
  v9 = (char *)a1 + v8;
  if ( !(_DWORD *)((char *)a1 + v8) )
    return 0LL;
  if ( a4 )
  {
    if ( (v7 & 2) != 0 )
      v17 = *(_DWORD *)(a3 + 4LL * a2 + 556);
    else
      v17 = *(_DWORD *)(a3 + 8LL * a2 + 28);
    *a4 = v17;
  }
  if ( (*(_DWORD *)(a3 + 20) & 2) == 0 )
    return &v9[*(unsigned int *)(a3 + 8LL * a2 + 24) - 512];
  v10 = *((_QWORD *)v9 + 1);
  if ( (v6 & v10) == 0 )
    return 0LL;
  v11 = *(_QWORD *)(a3 + 544);
  v12 = 576;
  if ( a2 > 2 )
  {
    v13 = 4LL;
    v14 = a2 - 2;
    v15 = (_DWORD *)(a3 + 564);
    do
    {
      if ( (v13 & v10) != 0 )
      {
        if ( (v13 & v11) != 0 )
          v12 = (v12 + 63) & 0xFFFFFFC0;
        v12 += *v15;
      }
      v13 = __ROL8__(v13, 1);
      ++v15;
      --v14;
    }
    while ( v14 );
  }
  if ( (v6 & v11) != 0 )
    v12 = (v12 + 63) & 0xFFFFFFC0;
  return &v9[v12 - 512];
}
