/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x14080C434
 * Callers:
 *     SdbpGetPathAppraiser @ 0x1408071E0 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslPathCombine @ 0x14080A3B0 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14080A6E0 (AslPathToSystemPathBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14080C56C (AslEnvGetSystem32DirPathBuf.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, L"\\SysNative");
    if ( v9 < 0 )
    {
      v10 = "AslPathToSystemPathBuf failed [%x]";
      v11 = 1736;
LABEL_11:
      AslLogCallPrintf(1, (unsigned int)"AslEnvGetSysNativeDirPathForGuestBuf", v11, (_DWORD)v10);
      return (unsigned int)v9;
    }
    if ( a3 && *a3 )
    {
      v9 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
      if ( v9 < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1746;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      if ( v9 < 0 )
      {
        v10 = "RtlStringCchCopyW failed [%x]";
        v11 = 1754;
        goto LABEL_11;
      }
    }
    return (unsigned int)v9;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
