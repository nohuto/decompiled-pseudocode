/*
 * XREFs of RtlpHpLfhReportError @ 0x140496164
 * Callers:
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x1403D9244 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpLfhReportError(int a1, _QWORD *a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( a1 == 17 )
    a2 = (_QWORD *)*a2;
  RtlpLogHeapFailure(a1, (ULONG_PTR)a2, a3, a4, a5, 0LL);
}
