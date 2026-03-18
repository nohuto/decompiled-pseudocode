/*
 * XREFs of RtlpFindEntry @ 0x1405F3434
 * Callers:
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x1405EB760 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x1405ECA10 (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x1405ED2D8 (RtlpInsertFreeBlock.c)
 *     RtlZeroHeap @ 0x140783280 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x1405F35F8 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  unsigned __int64 v5; // rdx
  int v6; // r9d
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  while ( 1 )
  {
    v5 = *((unsigned int *)v2 + 2);
    if ( a2 < v5 )
      break;
    if ( !*v2 )
    {
      v6 = v5 - 1;
      goto LABEL_8;
    }
    v2 = (__int64 *)*v2;
  }
  v6 = a2;
LABEL_8:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(a1, (_DWORD)v2, 1, v6, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    LODWORD(a1) = v4;
    v6 = *((_DWORD *)v2 + 6);
  }
  return result;
}
