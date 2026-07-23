/*
 * XREFs of PopFxQueueWorkItem @ 0x1402813BC
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1402812E8 (PopFxQueueWorkOrder.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 */

LONG __fastcall PopFxQueueWorkItem(__int64 a1, _LIST_ENTRY *a2, char a3)
{
  LONG result; // eax

  if ( a3 || (result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a2, 48LL, 0LL), !(_BYTE)result) )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 32), 0, 1, 0);
  }
  return result;
}
