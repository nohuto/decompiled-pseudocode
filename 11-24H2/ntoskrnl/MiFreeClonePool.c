/*
 * XREFs of MiFreeClonePool @ 0x1403F7F0C
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1403F734C (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x1403F7BB0 (MiSegmentDereferenceWorker.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403F85B4 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // rsi

  v1 = a1 + 149;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v3 = result;
    if ( !result )
      break;
    v4 = *((_QWORD *)&result[1].Next + 1);
    if ( v4 )
    {
      v5 = result;
      do
      {
        MiUnlockPagedAddress(v5);
        v5 += 256;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  return result;
}
