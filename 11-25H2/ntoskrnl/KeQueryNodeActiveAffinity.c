/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140267660
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14035E9C0 (PnpSetDeviceAffinityThread.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047B354 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiComputeIdealDpcGang @ 0x1404B9CCC (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BC320 (ExAllocateCacheAwarePushLock.c)
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     ExpPartitionStart @ 0x1407B0864 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407B099C (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0A4C (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x140A1764C (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x140A46044 (ExpQueryNumaProcessorMap.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C471C0 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x1402676D4 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140267750 (KiQuerySubNodeActiveAffinity.c)
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
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode, Affinity, Count);
  }
}
