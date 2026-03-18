/*
 * XREFs of RtlpHpLfhReportError @ 0x14049B638
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1402B6644 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpLfhReportError(int a1, _QWORD *a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( a1 == 17 )
    a2 = (_QWORD *)*a2;
  RtlpLogHeapFailure(a1, (ULONG_PTR)a2, a3, a4, a5, 0LL);
}
