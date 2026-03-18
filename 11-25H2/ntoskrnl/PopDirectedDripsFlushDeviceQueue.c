/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x140755524
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140755090 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1407553B0 (PopDirectedDripsBuildPs4BroadcastTree.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x1407555D0 (PopDirectedDripsRemoveQueueDevice.c)
 */

__int64 __fastcall PopDirectedDripsFlushDeviceQueue(_QWORD *a1)
{
  _QWORD *i; // r8
  __int64 result; // rax

  for ( i = a1; (_QWORD *)*i != i; result = PopDirectedDripsRemoveQueueDevice(i) )
    ;
  return result;
}
