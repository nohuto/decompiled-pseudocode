/*
 * XREFs of SdbpCreateSearchDBContext @ 0x140A80724
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409413E0 (SdbpCheckKObject.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404B73B0 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslPathSplit @ 0x140AA151C (AslPathSplit.c)
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
  if ( a2 )
  {
    v7 = *a2;
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
    v10 = (wchar_t *)AslAlloc(v6, 2LL * (unsigned int)(v8 + 1));
    if ( !v10 )
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
      return v4;
    }
    if ( (int)AslPathSplit(v7, v10, v9, pszSrc, v20, v22) >= 0
      && (v14 = (wchar_t *)AslAlloc(v12, 0x208uLL), (v5 = v14) != 0LL) )
    {
      if ( RtlStringCchCopyW(v14, 0x104uLL, pszSrc) >= 0 && RtlStringCchCatW(v5, v15, v22) >= 0 )
        goto LABEL_17;
    }
    else
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
    }
LABEL_19:
    AslFree(v13, v10);
    goto LABEL_20;
  }
  v10 = (wchar_t *)AslAlloc(v6, 4uLL);
  v5 = (wchar_t *)AslAlloc(v16, 2uLL);
  v18 = AslAlloc(v17, 2uLL);
  if ( v10 && v5 && v18 )
  {
    RtlStringCchCopyW(v10, 2uLL, L".");
    *v5 = 0;
    *v19 = 0;
    a1[3] = v19;
LABEL_17:
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
  AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchDBContext");
  if ( v10 )
    goto LABEL_19;
LABEL_20:
  if ( v5 )
    AslFree(v13, v5);
  return v4;
}
