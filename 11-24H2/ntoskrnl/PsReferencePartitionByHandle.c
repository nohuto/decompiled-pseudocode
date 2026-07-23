/*
 * XREFs of PsReferencePartitionByHandle @ 0x1408F6F54
 * Callers:
 *     EtwpSetPartitionContext @ 0x14064EF1C (EtwpSetPartitionContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PsCreatePartition @ 0x14077A930 (PsCreatePartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14079797C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797B20 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1409152C0 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1409155A0 (MiAllocateVirtualMemoryCommon.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B630 (MiInitializeCreateSectionPacket.c)
 *     SmProcessCompressionInfoRequest @ 0x140A120D4 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
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
