/*
 * XREFs of AllocateNewNVMeIoSplitContext @ 0x140119530
 * Callers:
 *     CreateNVMeSplitIoContextPool @ 0x140119C4C (CreateNVMeSplitIoContextPool.c)
 *     NvmeSplitIoParallel @ 0x1401256A0 (NvmeSplitIoParallel.c)
 * Callees:
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 */

__int64 __fastcall AllocateNewNVMeIoSplitContext(__int64 a1, ULONG a2)
{
  unsigned int NodeNumber; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+18h] BYREF

  ProcessorNumber = 0;
  Length = 80;
  NodeNumber = 0x80000000;
  memset(&Information, 0, sizeof(Information));
  if ( KeGetProcessorNumberFromIndex(a2, &ProcessorNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    NodeNumber = Information.NumaNode.NodeNumber;
  }
  return RaidAllocatePoolEx(72LL, 128LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), NodeNumber);
}
