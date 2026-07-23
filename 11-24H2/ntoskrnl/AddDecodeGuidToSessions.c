/*
 * XREFs of AddDecodeGuidToSessions @ 0x140A5A96C
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140A5AA14 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int16 v1; // si
  char v2; // di
  unsigned int v5; // edx
  unsigned int *v7; // rbx

  v1 = *(_WORD *)(a1 + 100);
  v2 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v7 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 648LL),
                           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
                           0);
    v2 = EtwpTrackDecodeGuidForSession(v7, a1);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 704LL) + 8LL * *v7),
      1u);
  }
  while ( v2 );
  return v2;
}
