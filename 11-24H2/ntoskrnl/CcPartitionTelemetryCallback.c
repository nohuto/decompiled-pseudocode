/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140A77C20
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x140431098 (CcGetActiveWorkerCountInPartition.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x1404877C4 (MmGetAvailablePagesForPartitionObject.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404B20B0 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  ++qword_140F8E728;
  qword_140F8E748 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  qword_140F8E750 += MmGetNumberOfPhysicalPagesForPartitionObject(*(unsigned __int16 ***)(v1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(v2, (__int64)CcPrivateVolumeCacheMapTelemetryCallback, 0LL);
  }
  else
  {
    qword_140F8E738 += *(unsigned int *)(v2 + 976);
    qword_140F8E740 += *(_QWORD *)(v2 + 1056);
    qword_140F8E758 += *(unsigned int *)(v2 + 840);
    qword_140F8E768 += *(_QWORD *)(v2 + 1144);
    qword_140F8E770 += *(_QWORD *)(v2 + 1152);
    CcGetActiveWorkerCountInPartition(v2, 0LL, &qword_140F8E760);
  }
  return 1;
}
