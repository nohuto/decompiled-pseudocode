/*
 * XREFs of sub_14091F8F8 @ 0x14091F8F8
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 *     sub_14091F8C0 @ 0x14091F8C0 (sub_14091F8C0.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     sub_1409F876C @ 0x1409F876C (sub_1409F876C.c)
 *     sub_140A719B4 @ 0x140A719B4 (sub_140A719B4.c)
 *     sub_140A907A8 @ 0x140A907A8 (sub_140A907A8.c)
 */

__int64 __fastcall sub_14091F8F8(__int64 a1)
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
      sub_1409F876C(a1, *(_QWORD *)(*(_DWORD *)(a1 + 88) * i + *(_QWORD *)(a1 + 104)));
    sub_140A719B4(a1 + 88);
    for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
      sub_14091DB84(a1, *(_QWORD *)(*(_DWORD *)(a1 + 8) * j + *(_QWORD *)(a1 + 24)));
    sub_140A719B4(a1 + 8);
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
      sub_14091DB84(a1, v6);
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 140); ++k )
      sub_140A907A8(*(_QWORD *)(*(_DWORD *)(a1 + 136) * k + *(_QWORD *)(a1 + 152)));
    sub_140A719B4(a1 + 136);
    if ( *(_DWORD *)(a1 + 188) )
    {
      do
        sub_1409DA42C(*(PVOID **)(*(_DWORD *)(a1 + 184) * v1++ + *(_QWORD *)(a1 + 200)));
      while ( v1 < *(_DWORD *)(a1 + 188) );
    }
    sub_140A719B4(a1 + 184);
    SddlpFree((void *)a1);
  }
  return 0LL;
}
