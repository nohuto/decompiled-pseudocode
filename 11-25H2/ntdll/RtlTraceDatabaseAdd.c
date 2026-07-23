/*
 * XREFs of RtlTraceDatabaseAdd @ 0x180149670
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180149B1C (RtlpTraceDatabaseInternalAdd.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // al

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 40) = 0LL;
  LOBYTE(a4) = v8;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return a4;
}
