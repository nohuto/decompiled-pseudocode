/*
 * XREFs of RtlGetExePath @ 0x180082AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNeedCurrentDirectoryForExePath @ 0x180082B24 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpGetCachedPath @ 0x1800842B0 (RtlpGetCachedPath.c)
 */

__int64 __fastcall RtlGetExePath(__int64 a1, _QWORD *a2)
{
  char v3; // al
  __int64 CachedPath; // rax

  v3 = RtlpNeedCurrentDirectoryForExePath();
  CachedPath = RtlpGetCachedPath(&RtlpExeSearchPath, RtlpComputeExePath, v3 == 0, 0LL);
  if ( CachedPath )
  {
    *a2 = CachedPath + 128;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225495LL;
  }
}
