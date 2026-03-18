/*
 * XREFs of FsRtlpOplockPerfGetLatencyNsBucket @ 0x1406FFD18
 * Callers:
 *     FsRtlpOplockPerfSummarizeData @ 0x140700284 (FsRtlpOplockPerfSummarizeData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpOplockPerfGetLatencyNsBucket(__int64 a1)
{
  unsigned __int16 i; // dx
  __int64 result; // rax

  for ( i = 0; i < (unsigned __int16)word_140E65A78; ++i )
  {
    result = g_OplockPerfLatencyLevels[i + 16];
    if ( a1 < result )
      return result;
  }
  return g_OplockPerfLatencyLevels[(unsigned __int16)word_140E65A78 + 16];
}
