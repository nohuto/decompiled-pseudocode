/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x140A866D8
 * Callers:
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x140ADA530 (WmiQueryTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const UNICODE_STRING *v4; // rdx
  unsigned int *v5; // rax
  __int16 v7; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = EtwpAcquireLoggerContextByLoggerName((__int64)CurrentServerSiloGlobals[52].Flink, v4, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *v5 )
    v7 = *(_WORD *)v5;
  else
    v7 = -1;
  *(_WORD *)a2 = v7;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v5 + 170) + 704LL) + 8LL * *v5),
    1u);
  return 0LL;
}
