/*
 * XREFs of MiStoreDrainWriteSupports @ 0x140489210
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x1403C056C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDeletePartition @ 0x140680594 (MiStoreDeletePartition.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreDrainWriteSupports(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = RtlpInterlockedFlushSList(a1 + 86);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
