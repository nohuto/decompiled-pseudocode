/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x140431098
 * Callers:
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A59CC0 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 *     CcPartitionTelemetryCallback @ 0x140A77C20 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x1404310C4 (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(CcGetActiveWorkerCountPerNode, a1, a2, a3);
  return 1;
}
