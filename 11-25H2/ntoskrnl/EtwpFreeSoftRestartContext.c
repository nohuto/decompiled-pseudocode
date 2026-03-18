/*
 * XREFs of EtwpFreeSoftRestartContext @ 0x14098F260
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpCancelMemoryPreservation @ 0x1407A033C (EtwpCancelMemoryPreservation.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSoftRestartContext(__int64 a1)
{
  UNICODE_STRING *v1; // rdi

  v1 = *(UNICODE_STRING **)(a1 + 1352);
  if ( v1 )
  {
    EtwpCancelMemoryPreservation(a1);
    RtlFreeAnsiString(v1 + 1);
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 1352) = 0LL;
  }
}
