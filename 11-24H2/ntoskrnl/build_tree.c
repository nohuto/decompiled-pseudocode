/*
 * XREFs of build_tree @ 0x140600320
 * Callers:
 *     _tr_flush_block @ 0x1405FFE68 (_tr_flush_block.c)
 * Callees:
 *     gen_bitlen @ 0x1406009E8 (gen_bitlen.c)
 *     gen_codes @ 0x140600C0C (gen_codes.c)
 *     pqdownheap @ 0x140600D24 (pqdownheap.c)
 */

__int64 __fastcall build_tree(int *a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 v3; // r14
  int v4; // esi
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // r10
  __int64 i; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int j; // ebx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  __int64 v22; // rcx
  __int64 v23; // r8

  v2 = (__int64 *)a2[2];
  v3 = *a2;
  v4 = -1;
  v7 = 0;
  v8 = *((int *)v2 + 5);
  v9 = *v2;
  a1[1339] = 0;
  a1[1340] = 573;
  if ( (int)v8 > 0 )
  {
    for ( i = 0LL; i < v8; ++i )
    {
      if ( *(_WORD *)(v3 + 4 * i) )
      {
        v11 = a1[1339];
        v4 = v7;
        a1[1339] = v11 + 1;
        a1[v11 + 767] = v7;
        *((_BYTE *)a1 + i + 5364) = 0;
      }
      else
      {
        *(_WORD *)(v3 + 4 * i + 2) = 0;
      }
      ++v7;
    }
  }
  while ( 1 )
  {
    v14 = a1[1339];
    if ( v14 >= 2 )
      break;
    a1[1339] = v14 + 1;
    v12 = v4 + 1;
    v13 = v4 + 1;
    if ( v4 >= 2 )
    {
      v12 = 0;
      v13 = v4;
    }
    a1[v14 + 767] = v12;
    *(_WORD *)(v3 + 4LL * v12) = 1;
    *((_BYTE *)a1 + v12 + 5364) = 0;
    --a1[1491];
    if ( v9 )
      a1[1492] -= *(unsigned __int16 *)(v9 + 4LL * v12 + 2);
    v4 = v13;
  }
  *((_DWORD *)a2 + 2) = v4;
  for ( j = a1[1339] / 2; j >= 1; --j )
    pqdownheap(a1, v3, (unsigned int)j);
  do
  {
    v16 = a1[1339];
    v17 = a1[767];
    a1[767] = a1[v16 + 766];
    a1[1339] = v16 - 1;
    pqdownheap(a1, v3, 1LL);
    v18 = a1[1340];
    v19 = a1[767];
    a1[1340] = v18 - 1;
    a1[v18 + 765] = v17;
    v20 = a1[1340];
    a1[1340] = v20 - 1;
    a1[v20 + 765] = v19;
    *(_WORD *)(v3 + 4LL * (int)v8) = *(_WORD *)(v3 + 4 * v19) + *(_WORD *)(v3 + 4 * v17);
    v21 = *((_BYTE *)a1 + v17 + 5364);
    if ( v21 < *((_BYTE *)a1 + v19 + 5364) )
      v21 = *((_BYTE *)a1 + v19 + 5364);
    *((_BYTE *)a1 + (int)v8 + 5364) = v21 + 1;
    *(_WORD *)(v3 + 4 * v19 + 2) = v8;
    *(_WORD *)(v3 + 4 * v17 + 2) = v8;
    a1[767] = v8;
    LODWORD(v8) = v8 + 1;
    pqdownheap(a1, v3, 1LL);
  }
  while ( a1[1339] >= 2 );
  v23 = a1[1340];
  a1[1340] = v23 - 1;
  a1[v23 + 765] = a1[767];
  gen_bitlen(v22, a2);
  return gen_codes(v3, (unsigned int)v4, a1 + 758);
}
