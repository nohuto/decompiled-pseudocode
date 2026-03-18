/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x1403A920C
 * Callers:
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A5FAC0 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 *     CcPartitionTelemetryCallback @ 0x140A76BE0 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x1403A9238 (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(CcGetActiveWorkerCountPerNode, a1, a2, a3);
  return 1;
}
