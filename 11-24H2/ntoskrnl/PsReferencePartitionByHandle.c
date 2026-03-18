/*
 * XREFs of PsReferencePartitionByHandle @ 0x140934434
 * Callers:
 *     EtwpSetPartitionContext @ 0x14065093C (EtwpSetPartitionContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14077AA80 (PsCreatePartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14079786C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797A10 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x140797FD8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MmAllocateUserStack @ 0x1408DE514 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408DE710 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408DE9F0 (MiAllocateVirtualMemoryCommon.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfpPartitionFindByHandle @ 0x140933E78 (PfpPartitionFindByHandle.c)
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 *     MiInitializeCreateSectionPacket @ 0x1409413D0 (MiInitializeCreateSectionPacket.c)
 *     SmProcessCompressionInfoRequest @ 0x140A18F64 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A5FC18 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
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
