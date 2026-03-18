/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140A76BE0
 * Callers:
 *     <none>
 * Callees:
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403A920C (CcGetActiveWorkerCountInPartition.c)
 *     MmGetAvailablePagesForPartitionObject @ 0x14048CE94 (MmGetAvailablePagesForPartitionObject.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140F8DD88;
  qword_140F8DDA8 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  qword_140F8DDB0 += *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + ***(unsigned __int16 ***)(v1 + 8)) + 18512LL);
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(v1);
  }
  else
  {
    qword_140F8DD98 += *(unsigned int *)(v1 + 976);
    qword_140F8DDA0 += *(_QWORD *)(v1 + 1056);
    qword_140F8DDB8 += *(unsigned int *)(v1 + 840);
    qword_140F8DDC8 += *(_QWORD *)(v1 + 1144);
    qword_140F8DDD0 += *(_QWORD *)(v1 + 1152);
    CcGetActiveWorkerCountInPartition(v1, 0LL, &qword_140F8DDC0);
  }
  return 1;
}
