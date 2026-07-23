/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x1407649B4
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764520 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764840 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x140764A60 (PopDirectedDripsRemoveQueueDevice.c)
 */

__int64 __fastcall PopDirectedDripsFlushDeviceQueue(_QWORD *a1)
{
  _QWORD *i; // r8
  __int64 result; // rax

  for ( i = a1; (_QWORD *)*i != i; result = PopDirectedDripsRemoveQueueDevice(i) )
    ;
  return result;
}
