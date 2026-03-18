/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x140764FE4
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764B50 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764E70 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x140765090 (PopDirectedDripsRemoveQueueDevice.c)
 */

__int64 __fastcall PopDirectedDripsFlushDeviceQueue(_QWORD *a1)
{
  _QWORD *i; // r8
  __int64 result; // rax

  for ( i = a1; (_QWORD *)*i != i; result = PopDirectedDripsRemoveQueueDevice(i) )
    ;
  return result;
}
