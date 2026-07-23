/*
 * XREFs of RtlpRemoveUCRBlock @ 0x1405EACB0
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpRemoveUCRBlock(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // r8
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx

  v2 = (ULONG_PTR)(a2 + 2);
  v4 = a2[2];
  v5 = (__int64 *)a2[3];
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *v5;
  if ( *v5 == v6 && v7 == v2 )
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, v2, v6, v7, 0LL);
  }
  if ( a2[5] )
  {
    v8 = *a2;
    v9 = (__int64 *)a2[1];
    v10 = *(_QWORD *)(*a2 + 8);
    v11 = *v9;
    if ( *v9 == v10 && (__int64 *)v11 == a2 )
    {
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)a2, v10, v11, 0LL);
    }
  }
}
