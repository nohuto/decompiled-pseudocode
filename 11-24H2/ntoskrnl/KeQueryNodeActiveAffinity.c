/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x14026FD20
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14025DAAC (PnpSetDeviceAffinityThread.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404B6390 (ExAllocateCacheAwarePushLock.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     ExpPartitionStart @ 0x1407C0484 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407C05BC (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C066C (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x1408F8B1C (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x140A40CE0 (ExpQueryNumaProcessorMap.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x14026FD94 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber]);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, Affinity, Count);
  }
}
