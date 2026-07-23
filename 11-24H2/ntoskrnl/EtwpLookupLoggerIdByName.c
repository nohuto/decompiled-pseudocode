/*
 * XREFs of EtwpLookupLoggerIdByName @ 0x1409CFB04
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpLookupLoggerIdByName(__int64 a1, const UNICODE_STRING *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int i; // ebx
  __int64 v8; // rax
  unsigned int *v9; // rdi

  v6 = -1073741162;
  for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
  {
    v8 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0);
    v9 = (unsigned int *)v8;
    if ( v8 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 136), a2, 1u) )
      {
        EtwpReleaseLoggerContext(v9, 0);
        v6 = 0;
        *a3 = i;
        return v6;
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v9 + 170) + 704LL) + 8LL * *v9),
        1u);
    }
  }
  return v6;
}
