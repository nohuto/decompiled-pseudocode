/*
 * XREFs of RtlpHpLfhReportError @ 0x14049B388
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1403C7970 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpLfhReportError(int a1, _QWORD *a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( a1 == 17 )
    a2 = (_QWORD *)*a2;
  RtlpLogHeapFailure(a1, (ULONG_PTR)a2, a3, a4, a5, 0LL);
}
