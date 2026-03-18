/*
 * XREFs of AslPathSplit @ 0x140AA64AC
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x140A85BE4 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x14046744C (RtlStringCchCopyNW.c)
 *     wcsrchr @ 0x140500180 (wcsrchr.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
  const char *v14; // r9
  __int64 v15; // r8
  wchar_t *v16; // rax
  const wchar_t *v17; // rsi
  __int64 v18; // r11
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
    {
      v15 = 1231LL;
LABEL_9:
      v14 = "RtlStringCchCopyNW failed [%x]";
      goto LABEL_10;
    }
  }
  else
  {
    v11 = pszSrc;
  }
  v12 = v11 + 1;
  if ( *v11 != 92 )
    v12 = v11;
  v13 = RtlStringCchCopyW(pszDesta, 0x105uLL, v12);
  if ( v13 >= 0 )
  {
    v16 = wcsrchr(pszDesta, 0x2Eu);
    v17 = v16;
    if ( v16 )
    {
      v13 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v16 - pszDesta);
      if ( v13 < 0 )
      {
        v15 = 1264LL;
        goto LABEL_9;
      }
      a4[v18] = 0;
      v13 = RtlStringCchCopyW(a6, 0x104uLL, v17);
      if ( v13 < 0 )
      {
        v14 = "RtlStringCchCopyW failed [%x]";
        v15 = 1271LL;
        goto LABEL_10;
      }
    }
    else
    {
      v13 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
      if ( v13 < 0 )
      {
        v14 = "RtlStringCchCopyW failed [%x]";
        v15 = 1278LL;
        goto LABEL_10;
      }
    }
    return 0;
  }
  v14 = "RtlStringCchCopyW failed [%x]";
  v15 = 1251LL;
LABEL_10:
  AslLogCallPrintf(1LL, (__int64)"AslPathSplit", v15, (__int64)v14);
  return (unsigned int)v13;
}
