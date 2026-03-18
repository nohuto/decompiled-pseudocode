/*
 * XREFs of MiPartitionObjectToPartition @ 0x1404156EC
 * Callers:
 *     MmFreeNonChargedSecurePages @ 0x140413B08 (MmFreeNonChargedSecurePages.c)
 *     MmAllocateContiguousMemoryEx @ 0x140414940 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140415540 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404D1B5C (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MmAllocateMemoryRanges @ 0x1407DB290 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407DB570 (MmQueryMemoryRanges.c)
 *     MmBuildLargePages @ 0x1409FE260 (MmBuildLargePages.c)
 *     MmGetPageFileInformation @ 0x140A5A858 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6370 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG *__fastcall MiPartitionObjectToPartition(ULONG **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  ULONG **v7; // r10
  ULONG *v8; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG **)-1LL )
    {
      v7 = (ULONG **)((char *)qword_140E2FD48
                    + 8 * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG **)-2LL )
      {
        v8 = 0LL;
        goto LABEL_5;
      }
      v6 = 1;
      v7 = BugCheckParameter2;
    }
    v8 = *v7;
    if ( !v8 )
      goto LABEL_5;
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  if ( v8[2] != 305535296 )
    goto LABEL_5;
  if ( !v6 )
    goto LABEL_9;
  if ( *((ULONG ***)v8 + 23) != BugCheckParameter2 )
LABEL_5:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  if ( PsReferencePartitionSafe((__int64)BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v8, BugCheckParameter4);
    v8 = (ULONG *)BugCheckParameter4;
  }
LABEL_9:
  *a3 = BugCheckParameter4;
  return v8;
}
