/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x1402CBE5C
 * Callers:
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A614E0 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 *     CcPartitionTelemetryCallback @ 0x140A7D920 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x1402CBE88 (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(CcGetActiveWorkerCountPerNode, a1, a2, a3);
  return 1;
}
