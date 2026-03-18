/*
 * XREFs of PfTFullEventListAdd @ 0x140488B58
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140245E30 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14094F57C (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(__int64 a1, struct _SLIST_ENTRY *a2)
{
  union _SLIST_HEADER *v2; // rbx
  PSLIST_ENTRY result; // rax

  v2 = (union _SLIST_HEADER *)(a1 + 544);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 544), a2);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(v2->Alignment);
    if ( (unsigned int)result <= *(_DWORD *)(a1 + 560) )
      break;
    result = RtlpInterlockedPopEntrySList(v2);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 416),
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
