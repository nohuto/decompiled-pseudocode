/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1403A8640
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1403751EC (PnpSetDeviceAffinityThread.c)
 *     MiComputeIdealDpcGang @ 0x1403A8170 (MiComputeIdealDpcGang.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14047BB30 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BB520 (ExAllocateCacheAwarePushLock.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     ExpPartitionStart @ 0x1407C0034 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1407C016C (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C021C (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x140A2236C (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x140A49FC0 (ExpQueryNumaProcessorMap.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C584A0 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x1403A86B4 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x1403A8720 (KiQuerySubNodeActiveAffinity.c)
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
