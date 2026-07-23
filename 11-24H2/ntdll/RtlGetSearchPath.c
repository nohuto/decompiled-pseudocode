/*
 * XREFs of RtlGetSearchPath @ 0x180004E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x180006160 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(&RtlpSearchPath, RtlpComputeSearchPath, 0LL, 0LL);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 128);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
