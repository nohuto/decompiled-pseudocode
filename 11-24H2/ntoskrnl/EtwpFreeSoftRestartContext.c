/*
 * XREFs of EtwpFreeSoftRestartContext @ 0x140A49584
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpCancelMemoryPreservation @ 0x1407AFB5C (EtwpCancelMemoryPreservation.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
