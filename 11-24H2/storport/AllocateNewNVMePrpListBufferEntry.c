/*
 * XREFs of AllocateNewNVMePrpListBufferEntry @ 0x140119600
 * Callers:
 *     NvmeContinueScatterGatherProcessIO @ 0x14011C250 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x140087984 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall AllocateNewNVMePrpListBufferEntry(__int64 a1, ULONG a2)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned int NodeNumber; // edi
  void *v8; // rax
  void *v9; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+18h] BYREF
  PHYSICAL_ADDRESS v13; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 128);
  v13.QuadPart = 0LL;
  result = RaidAllocatePool(
             72LL,
             (unsigned int)(g_RecommendedSharedDataAlignment - 1)
           + 64LL
           - ((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 64)
           % (unsigned int)g_RecommendedSharedDataAlignment,
             1296982354LL,
             *(_QWORD *)(v3 + 8));
  v6 = result;
  if ( result )
  {
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Information, 0, sizeof(Information));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(a2, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
    {
      NodeNumber = Information.NumaNode.NodeNumber;
    }
    v8 = NvmeAllocateContiguousMemoryWithPreferredNode(0x1000u, *(_QWORD **)(a1 + 128), NodeNumber, &v13);
    v9 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, 0x1000uLL);
      *(PHYSICAL_ADDRESS *)(v6 + 24) = v13;
      result = v6;
      *(_QWORD *)(v6 + 16) = v9;
      *(_WORD *)(v6 + 36) = 512;
    }
    else
    {
      ExFreePoolWithTag((PVOID)v6, 0x4D4E6152u);
      return 0LL;
    }
  }
  return result;
}
