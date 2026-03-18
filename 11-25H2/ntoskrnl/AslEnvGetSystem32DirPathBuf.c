/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1407FC2BC
 * Callers:
 *     SdbpGetPathSystem @ 0x1407F7290 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407FC184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FDBC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslPathCombine @ 0x1407FA100 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1407FA430 (AslPathToSystemPathBuf.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  unsigned __int64 i; // rax
  int v12; // ebx
  const char *v13; // r9
  int v14; // r8d
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i >= 0x80 )
      return (unsigned int)-1073741637;
    if ( *(_WORD *)((char *)&unk_140E0A090 + i) == a4 && *(_WORD *)((char *)&unk_140E0A090 + i + 2) == v9 )
      break;
    ++v10;
  }
  v12 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, *((NTSTRSAFE_PCWSTR *)&unk_140E0A090 + 2 * v10 + 1));
  if ( v12 < 0 )
  {
    v13 = "AslPathToSystemPathBuf failed [%x]";
    v14 = 1464;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"AslEnvGetSystem32DirPathBuf", v14, (_DWORD)v13);
    return (unsigned int)v12;
  }
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
    if ( v12 < 0 )
    {
      v13 = "AslPathCombine failed [%x]";
      v14 = 1474;
      goto LABEL_11;
    }
  }
  else
  {
    v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
    if ( v12 < 0 )
    {
      v13 = "RtlStringCchCopyW failed [%x]";
      v14 = 1482;
      goto LABEL_11;
    }
  }
  return 0;
}
