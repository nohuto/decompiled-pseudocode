/*
 * XREFs of sub_1408FD018 @ 0x1408FD018
 * Callers:
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 *     sub_1408FC89C @ 0x1408FC89C (sub_1408FC89C.c)
 *     sub_1408FCFE0 @ 0x1408FCFE0 (sub_1408FCFE0.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408FB2A4 @ 0x1408FB2A4 (sub_1408FB2A4.c)
 *     sub_1409E067C @ 0x1409E067C (sub_1409E067C.c)
 *     sub_1409FF824 @ 0x1409FF824 (sub_1409FF824.c)
 *     sub_140A77894 @ 0x140A77894 (sub_140A77894.c)
 *     sub_140A93FF8 @ 0x140A93FF8 (sub_140A93FF8.c)
 */

__int64 __fastcall sub_1408FD018(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // ebp
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 92); ++i )
      sub_1409FF824(a1, *(_QWORD *)(*(_DWORD *)(a1 + 88) * i + *(_QWORD *)(a1 + 104)));
    sub_140A77894(a1 + 88);
    for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
      sub_1408FB2A4(a1, *(_QWORD *)(*(_DWORD *)(a1 + 8) * j + *(_QWORD *)(a1 + 24)));
    sub_140A77894(a1 + 8);
    v5 = (__int64 *)(a1 + 64);
    while ( 1 )
    {
      v6 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (__int64 *)v6 == v5 )
        break;
      sub_1408FB2A4(a1, v6);
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 140); ++k )
      sub_140A93FF8(*(_QWORD *)(*(_DWORD *)(a1 + 136) * k + *(_QWORD *)(a1 + 152)));
    sub_140A77894(a1 + 136);
    if ( *(_DWORD *)(a1 + 188) )
    {
      do
        sub_1409E067C(*(PVOID **)(*(_DWORD *)(a1 + 184) * v1++ + *(_QWORD *)(a1 + 200)));
      while ( v1 < *(_DWORD *)(a1 + 188) );
    }
    sub_140A77894(a1 + 184);
    SddlpFree((void *)a1);
  }
  return 0LL;
}
