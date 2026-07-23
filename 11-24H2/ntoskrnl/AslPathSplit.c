/*
 * XREFs of AslPathSplit @ 0x140AA151C
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x140A80724 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x14045EEEC (RtlStringCchCopyNW.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  size_t v8; // rsi
  wchar_t *v10; // rax
  STRSAFE_PCNZWCH v11; // r11
  const wchar_t *v12; // r8
  NTSTATUS v13; // ebx
  wchar_t *v14; // rax
  const wchar_t *v15; // rsi
  __int64 v16; // r11
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = (unsigned int)cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  if ( v10 )
  {
    v13 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v13 < 0 )
      goto LABEL_8;
  }
  else
  {
    v11 = pszSrc;
  }
  v12 = v11 + 1;
  if ( *v11 != 92 )
    v12 = v11;
  v13 = RtlStringCchCopyW(pszDesta, 0x105uLL, v12);
  if ( v13 < 0 )
    goto LABEL_8;
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( v14 )
  {
    v13 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v14 - pszDesta);
    if ( v13 < 0 )
      goto LABEL_8;
    a4[v16] = 0;
    v13 = RtlStringCchCopyW(a6, 0x104uLL, v15);
    if ( v13 < 0 )
      goto LABEL_8;
    return 0;
  }
  v13 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
  if ( v13 >= 0 )
    return 0;
LABEL_8:
  AslLogCallPrintf(1LL, (__int64)"AslPathSplit");
  return (unsigned int)v13;
}
