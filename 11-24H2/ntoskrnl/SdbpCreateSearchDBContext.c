/*
 * XREFs of SdbpCreateSearchDBContext @ 0x140A85BE4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409595F0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140959920 (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404BC4A0 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 *     AslAlloc @ 0x14095D3E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     AslPathSplit @ 0x140AA64AC (AslPathSplit.c)
 */

__int64 __fastcall SdbpCreateSearchDBContext(_QWORD *a1, const wchar_t **a2)
{
  unsigned int v4; // ebp
  wchar_t *v5; // rbx
  __int64 v6; // rcx
  const wchar_t *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r15d
  wchar_t *v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  wchar_t *v14; // rax
  unsigned int v15; // r11d
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rax
  _WORD *v19; // r11
  int v20; // [rsp+20h] [rbp-498h]
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-468h] BYREF
  wchar_t v22[264]; // [rsp+260h] [rbp-258h] BYREF

  v4 = 0;
  memset_0(v22, 0, 0x208uLL);
  v5 = 0LL;
  memset_0(pszSrc, 0, 0x208uLL);
  if ( !a2 )
  {
    v10 = (wchar_t *)AslAlloc(v6, 4uLL);
    v5 = (wchar_t *)AslAlloc(v16, 2uLL);
    v18 = AslAlloc(v17, 2uLL);
    if ( !v10 || !v5 || !v18 )
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext", 470LL, (__int64)"Unable to allocate memory");
      if ( !v10 )
        goto LABEL_21;
      goto LABEL_20;
    }
    RtlStringCchCopyW(v10, 2uLL, L".");
    *v5 = 0;
    *v19 = 0;
    a1[3] = v19;
    goto LABEL_18;
  }
  v7 = *a2;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  v10 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v8 + 1));
  if ( !v10 )
  {
    AslLogCallPrintf(
      1LL,
      (__int64)"SdbpCreateSearchDBContext",
      438LL,
      (__int64)"Unable to allocate memory for directory path");
    return v4;
  }
  if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v20, v22) >= 0 )
  {
    v14 = (wchar_t *)AslAlloc(v12, 0x208uLL);
    v5 = v14;
    if ( !v14 )
    {
      AslLogCallPrintf(
        1LL,
        (__int64)"SdbpCreateSearchDBContext",
        455LL,
        (__int64)"Unable to allocate memory for full name");
      goto LABEL_20;
    }
    if ( RtlStringCchCopyW(v14, 0x104uLL, pszSrc) < 0 || RtlStringCchCatW(v5, v15, v22) < 0 )
      goto LABEL_20;
LABEL_18:
    a1[1] = a2;
    v4 = 1;
    a1[7] = 0LL;
    a1[4] = v10;
    a1[5] = v5;
    a1[6] = 0LL;
    a1[9] = 0LL;
    a1[8] = 0LL;
    a1[11] = 0LL;
    a1[12] = 0LL;
    return v4;
  }
  AslLogCallPrintf(
    1LL,
    (__int64)"SdbpCreateSearchDBContext",
    449LL,
    (__int64)"Unable to parse executable path for \"%ws\"");
LABEL_20:
  AslFree(v13, v10);
LABEL_21:
  if ( v5 )
    AslFree(v13, v5);
  return v4;
}
