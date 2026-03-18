/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140A7D920
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1402CBE5C (CcGetActiveWorkerCountInPartition.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1402CE9E0 (CcForEachPrivateVolumeCacheMap.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x14048CAA4 (MmGetAvailablePagesForPartitionObject.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404B78D0 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  ++qword_140F8E548;
  qword_140F8E568 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  qword_140F8E570 += MmGetNumberOfPhysicalPagesForPartitionObject(*(unsigned __int16 ***)(v1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(v2, (__int64)CcPrivateVolumeCacheMapTelemetryCallback, 0LL);
  }
  else
  {
    qword_140F8E558 += *(unsigned int *)(v2 + 976);
    qword_140F8E560 += *(_QWORD *)(v2 + 1056);
    qword_140F8E578 += *(unsigned int *)(v2 + 840);
    qword_140F8E588 += *(_QWORD *)(v2 + 1144);
    qword_140F8E590 += *(_QWORD *)(v2 + 1152);
    CcGetActiveWorkerCountInPartition(v2, 0LL, &qword_140F8E580);
  }
  return 1;
}
