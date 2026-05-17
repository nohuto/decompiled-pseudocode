/*
 * XREFs of RtlpInsertUCRBlock @ 0x18009FB50
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpFindUCREntry @ 0x1800A0970 (RtlpFindUCREntry.c)
 *     RtlpUpdateUCRIndexInsert @ 0x1800A0BD4 (RtlpUpdateUCRIndexInsert.c)
 */

__int64 __fastcall RtlpInsertUCRBlock(unsigned __int64 a1, __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 result; // rax
  __int64 **v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // r9

  if ( a2[5] )
  {
    UCREntry = RtlpFindUCREntry();
    v5 = *(__int64 **)(UCREntry + 8);
    if ( *v5 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = (__int64)v5;
      *v5 = (__int64)a2;
      *(_QWORD *)(UCREntry + 8) = a2;
    }
    else
    {
      RtlpLogHeapFailure(13, 0LL, UCREntry, 0LL, *v5, 0LL);
    }
    RtlpUpdateUCRIndexInsert(a1, a2);
  }
  v6 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v6 )
    v7 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000;
  else
    v7 = a1;
  result = *(_QWORD *)(v7 + 96);
  v9 = (__int64 **)(v7 + 96);
  v10 = a2 + 2;
  v11 = *(_QWORD *)(result + 8);
  if ( (__int64 **)v11 != v9 )
    return RtlpLogHeapFailure(13, 0LL, (__int64)v9, v11, 0LL, 0LL);
  *v10 = result;
  v10[1] = (__int64)v9;
  *(_QWORD *)(result + 8) = v10;
  *v9 = v10;
  return result;
}
