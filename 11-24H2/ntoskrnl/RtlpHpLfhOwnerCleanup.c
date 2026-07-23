/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x140603FE8
 * Callers:
 *     RtlpHpLfhBucketCleanup @ 0x140603A3C (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x1403D996C (RtlpHpLfhSubsegmentFree.c)
 */

void __fastcall RtlpHpLfhOwnerCleanup(__int64 *a1, unsigned __int8 *a2)
{
  _QWORD *v2; // r8
  ULONG_PTR *v3; // rbx
  __int64 v6; // rbp
  unsigned __int8 *v7; // rax
  unsigned __int8 **v8; // rdx
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rax
  __int64 v11; // rax

  v2 = a2 + 40;
  v3 = (ULONG_PTR *)(a2 + 24);
  v6 = a1[((unsigned __int64)*a2 >> 1) + 56];
  v7 = (unsigned __int8 *)*((_QWORD *)a2 + 5);
  if ( v7 != a2 + 40 )
  {
    v8 = (unsigned __int8 **)*((_QWORD *)a2 + 4);
    *v8 = v7;
    v3[1] = v2[1];
    *(_QWORD *)v2[1] = v3;
    *(_QWORD *)(*v2 + 8LL) = v8;
  }
  while ( 1 )
  {
    v9 = *v3;
    if ( (ULONG_PTR *)*v3 == v3 )
      break;
    if ( *(ULONG_PTR **)(v9 + 8) != v3 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v3 = v10;
    *(_QWORD *)(v10 + 8) = v3;
    if ( (*a2 & 1) == 0 && !*(_BYTE *)(v9 + 22) )
      --a2[1];
    *(_WORD *)(v9 + 32) = *(_WORD *)(v9 + 34);
    v11 = *(unsigned __int8 *)(v9 + 24);
    *(_BYTE *)(v9 + 22) = 3;
    *(_WORD *)(v9 + 8 * v11) = 1;
    RtlpHpLfhSubsegmentFree(a1, v9, v6);
  }
}
