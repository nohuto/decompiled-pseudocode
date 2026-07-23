/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x1800AA6EC
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800A8DF0 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax

  v1 = *(void **)(a1 + 488);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 488) = 0LL;
  }
  return result;
}
