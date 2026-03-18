/*
 * XREFs of AddDecodeGuidToSessions @ 0x1409EF43C
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1409EF4E0 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int8 v1; // si
  char v3; // di
  unsigned int v5; // edx
  unsigned int *v7; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v7 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL),
                           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
                           0);
    v3 = EtwpTrackDecodeGuidForSession(v7, a1);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v7 + 170) + 448LL) + 8LL * *v7),
      1u);
  }
  while ( v3 );
  return v3;
}
