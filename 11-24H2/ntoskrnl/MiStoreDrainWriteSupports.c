/*
 * XREFs of MiStoreDrainWriteSupports @ 0x140470054
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x14046FE3C (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
