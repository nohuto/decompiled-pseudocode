/*
 * XREFs of RtlpInsertUCRBlock @ 0x1405EABE8
 * Callers:
 *     RtlpCreateUCREntry @ 0x1405E93F0 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405E953C (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x1405F0AE8 (RtlpFindUCREntry.c)
 */

void __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, ULONG_PTR *a2)
{
  ULONG_PTR v4; // rdx
  ULONG_PTR UCREntry; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    UCREntry = RtlpFindUCREntry(a1, v4);
    v6 = *(__int64 **)(UCREntry + 8);
    if ( *v6 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (ULONG_PTR)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, UCREntry, 0LL, *v6, 0LL);
    }
  }
  v7 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (_QWORD *)(v8 + 96);
  v10 = a2 + 2;
  v11 = *(_QWORD *)(v8 + 96);
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 == v8 + 96 )
  {
    *v10 = v11;
    v10[1] = v9;
    *(_QWORD *)(v11 + 8) = v10;
    *v9 = v10;
  }
  else
  {
    RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)v9, v12, 0LL, 0LL);
  }
}
