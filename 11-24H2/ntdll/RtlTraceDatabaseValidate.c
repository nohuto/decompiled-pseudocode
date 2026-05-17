/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1801484B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection(a1 + 48);
  return 1;
}
