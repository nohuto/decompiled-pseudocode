/*
 * XREFs of NvmeNamespaceActiveConditionStep2 @ 0x140132D40
 * Callers:
 *     NvmeNamespaceActiveConditionStep1 @ 0x140132D10 (NvmeNamespaceActiveConditionStep1.c)
 * Callees:
 *     StorRestartDeviceIoQueue @ 0x140127E4C (StorRestartDeviceIoQueue.c)
 *     StorRestartDeviceIoQueue2 @ 0x140127EA8 (StorRestartDeviceIoQueue2.c)
 *     StorRestartDeviceIoQueue3WithReason @ 0x140127F18 (StorRestartDeviceIoQueue3WithReason.c)
 */

char __fastcall NvmeNamespaceActiveConditionStep2(__int64 a1)
{
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 1;
  if ( FeatureFixTRIMAddSCSIPassthrough )
    return StorRestartDeviceIoQueue3WithReason(a1, 1);
  if ( FeatureFixFUAForReadIoPerf )
    return StorRestartDeviceIoQueue2(a1);
  return StorRestartDeviceIoQueue(*(_QWORD *)(a1 + 256));
}
