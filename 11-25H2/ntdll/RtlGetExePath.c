/*
 * XREFs of RtlGetExePath @ 0x1800AAE60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNeedCurrentDirectoryForExePath @ 0x1800AAEB4 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpGetCachedPath @ 0x1800AC640 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  char v3; // al
  __int64 CachedPath; // rax

  v3 = RtlpNeedCurrentDirectoryForExePath(DosPathName);
  CachedPath = RtlpGetCachedPath(&RtlpExeSearchPath, RtlpComputeExePath, v3 == 0, 0LL);
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
