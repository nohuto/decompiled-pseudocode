/*
 * XREFs of EtwpUpdateDisallowList @ 0x1409EE900
 * Callers:
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EE97C (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned int updated; // ebx

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = (unsigned int *)v6;
  if ( v6 )
  {
    updated = EtwpUpdateDisallowedGuids(v6, a3, a4);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 448LL) + 8LL * *v7),
      1u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
