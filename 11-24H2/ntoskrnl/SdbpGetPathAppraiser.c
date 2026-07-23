/*
 * XREFs of SdbpGetPathAppraiser @ 0x1408071E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140807600 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x14080A3B0 (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14080C434 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  _WORD v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[276]; // [rsp+38h] [rbp-C8h] BYREF

  wcscpy(pszSrc, L"\\appraiser");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  v12 = -1;
  v11[0] = -1;
  pszSrc[12] = 0;
  ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v12, v11, a4);
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, (__int64)v11);
    v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v10 = 1309;
  }
  else
  {
    v9 = "AslPathCombine failed [%x]";
    v10 = 1303;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppraiser", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}
