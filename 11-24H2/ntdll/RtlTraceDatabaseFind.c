/*
 * XREFs of RtlTraceDatabaseFind @ 0x180146790
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpTraceDatabaseInternalFind @ 0x180146ACC (RtlpTraceDatabaseInternalFind.c)
 */

char __fastcall RtlTraceDatabaseFind(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // bl

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = RtlpTraceDatabaseInternalFind(a1, a2, a3, a4);
  if ( v8 )
    ++*(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v8;
}
