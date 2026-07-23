/*
 * XREFs of AslPathToSystemPathBuf @ 0x14080A6E0
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1408070E0 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x14080A620 (AslPathToSystemPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14080C434 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14080C56C (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404B73B0 (RtlStringCchCatW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v6; // ebx

  memset_0(pszDest, 0, 2 * cchDest);
  v6 = RtlStringCchCopyW(pszDest, cchDest, L"\\SystemRoot");
  if ( v6 >= 0 )
  {
    v6 = RtlStringCchCatW(pszDest, cchDest, pszSrc);
    if ( v6 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPathBuf", 1488, (unsigned int)"Failed to cat string [%x]");
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPathBuf", 1471, (unsigned int)"Failed to copy string [%x]");
  }
  return (unsigned int)v6;
}
