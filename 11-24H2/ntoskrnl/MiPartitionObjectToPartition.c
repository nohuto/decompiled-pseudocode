/*
 * XREFs of MiPartitionObjectToPartition @ 0x1403945BC
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404CAABC (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x1407EB9E0 (MmQueryMemoryRanges.c)
 *     MmBuildLargePages @ 0x1409F091C (MmBuildLargePages.c)
 *     MmGetPageFileInformation @ 0x140A54280 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
      v7 = (ULONG **)((char *)qword_140E300C8
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
