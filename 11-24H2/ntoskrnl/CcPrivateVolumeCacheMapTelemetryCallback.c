/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x140A59CC0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x140431098 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140F8E730;
  qword_140F8E738 += *(unsigned int *)(a2 + 912);
  qword_140F8E740 += *(_QWORD *)(a2 + 992);
  qword_140F8E758 += *(unsigned int *)(a2 + 776);
  qword_140F8E768 += *(_QWORD *)(a2 + 1080);
  qword_140F8E770 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140F8E760);
  return 1;
}
