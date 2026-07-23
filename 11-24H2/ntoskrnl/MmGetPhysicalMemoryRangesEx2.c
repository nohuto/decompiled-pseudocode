/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1404C14D8 (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407EAB60 (MmGetPhysicalMemoryRanges.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407EAB80 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x140AADC98 (MiGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(ULONG **a1, unsigned int a2)
{
  ULONG *v3; // rax
  ULONG *v4; // rdi
  __int64 PhysicalMemoryRanges; // rbx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 2) != 0 && a1 )
    return 0LL;
  v3 = MiPartitionObjectToPartition(a1, 0, &v7);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(v3, a2);
  if ( v7 )
    PsDereferencePartition(*((_QWORD *)v4 + 23));
  return PhysicalMemoryRanges;
}
