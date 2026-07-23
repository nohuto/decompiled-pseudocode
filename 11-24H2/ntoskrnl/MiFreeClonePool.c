/*
 * XREFs of MiFreeClonePool @ 0x1403EDE7C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1403EE6C4 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rbp
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
