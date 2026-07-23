/*
 * XREFs of RtlpInsertUCRBlock @ 0x1800DB980
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x1801173C0 (RtlpCreateUCREntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x1800DBA60 (RtlpFindUCREntry.c)
 *     RtlpUpdateUCRIndexInsert @ 0x1800DBCC4 (RtlpUpdateUCRIndexInsert.c)
 */

__int64 __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 UCREntry; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 result; // rax
  __int64 **v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    UCREntry = RtlpFindUCREntry(a1, v4);
    v6 = *(__int64 **)(UCREntry + 8);
    if ( *v6 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, UCREntry, 0LL, *v6, 0LL);
    }
    RtlpUpdateUCRIndexInsert(a1, a2);
  }
  v7 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  result = *(_QWORD *)(v8 + 96);
  v10 = (__int64 **)(v8 + 96);
  v11 = a2 + 2;
  v12 = *(_QWORD *)(result + 8);
  if ( (__int64 **)v12 != v10 )
    return RtlpLogHeapFailure(13, 0LL, (__int64)v10, v12, 0LL, 0LL);
  *v11 = result;
  v11[1] = (__int64)v10;
  *(_QWORD *)(result + 8) = v11;
  *v10 = v11;
  return result;
}
