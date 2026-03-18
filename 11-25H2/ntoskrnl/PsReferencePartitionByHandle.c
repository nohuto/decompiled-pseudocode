/*
 * XREFs of PsReferencePartitionByHandle @ 0x14093B9BC
 * Callers:
 *     EtwpSetPartitionContext @ 0x14064492C (EtwpSetPartitionContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140708F44 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14076AEE0 (PsCreatePartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14078849C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140788640 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x140788C08 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1408E915C (SmProcessSystemStoreTrimRequest.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     MmAllocateUserStack @ 0x1408FD254 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408FD450 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408FD730 (MiAllocateVirtualMemoryCommon.c)
 *     PfpPartitionFindByHandle @ 0x14093AACC (PfpPartitionFindByHandle.c)
 *     NtManagePartition @ 0x14093B600 (NtManagePartition.c)
 *     MiInitializeCreateSectionPacket @ 0x14093CB10 (MiInitializeCreateSectionPacket.c)
 *     SmProcessCompressionInfoRequest @ 0x140A124BC (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // r8
  void *v10; // r8
  struct _LIST_ENTRY *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    Blink = KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Blink;
  }
  else if ( a1 == -2LL )
  {
    Blink = (struct _LIST_ENTRY *)PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Blink = v11;
  }
  if ( PsReferencePartitionSafe((__int64)Blink) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
