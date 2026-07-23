/*
 * XREFs of SdbpGetPathAppPatch @ 0x1408070E0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406974B0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x140697640 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x140807330 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathMergeSource @ 0x140807430 (SdbpGetPathMergeSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AslPathCombine @ 0x14080A3B0 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14080A6E0 (AslPathToSystemPathBuf.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest)
{
  int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t v9[264]; // [rsp+50h] [rbp-238h] BYREF

  wcscpy(pszSrc, L"\\AppPatch");
  if ( cchDest < 0xA )
    return 3221225507LL;
  *pszDest = 0;
  v9[0] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 < 0 )
  {
    v6 = "AslPathCombine failed [%x]";
    v7 = 953;
LABEL_7:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatch", v7, (_DWORD)v6);
    return (unsigned int)v5;
  }
  v5 = AslPathToSystemPathBuf(pszDest, cchDest, v9);
  if ( v5 < 0 )
  {
    v6 = "AslPathToSystemPathBuf failed [%x]";
    v7 = 959;
    goto LABEL_7;
  }
  return (unsigned int)v5;
}
