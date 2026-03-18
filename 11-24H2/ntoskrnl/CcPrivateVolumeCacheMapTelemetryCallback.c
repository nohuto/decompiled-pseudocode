/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A614E0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1402CBE5C (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140F8E550;
  qword_140F8E558 += *(unsigned int *)(a2 + 912);
  qword_140F8E560 += *(_QWORD *)(a2 + 992);
  qword_140F8E578 += *(unsigned int *)(a2 + 776);
  qword_140F8E588 += *(_QWORD *)(a2 + 1080);
  qword_140F8E590 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140F8E580);
  return 1;
}
