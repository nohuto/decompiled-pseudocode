/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A5FAC0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403A920C (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140F8DD90;
  qword_140F8DD98 += *(unsigned int *)(a2 + 912);
  qword_140F8DDA0 += *(_QWORD *)(a2 + 992);
  qword_140F8DDB8 += *(unsigned int *)(a2 + 776);
  qword_140F8DDC8 += *(_QWORD *)(a2 + 1080);
  qword_140F8DDD0 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140F8DDC0);
  return 1;
}
