/*
 * XREFs of PfTFullEventListAdd @ 0x140483C48
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x14020E610 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140971A8C (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(__int64 a1, _SLIST_ENTRY *a2)
{
  _SLIST_HEADER *v2; // rbx
  PSLIST_ENTRY result; // rax

  v2 = (_SLIST_HEADER *)(a1 + 544);
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
