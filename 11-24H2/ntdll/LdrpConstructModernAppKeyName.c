/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x180087A54
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180087120 (RtlQueryPackageClaims.c)
 *     RtlStringCbPrintfExW @ 0x180087430 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpConstructModernAppKeyName(wchar_t *Buffer)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-C0h] BYREF
  int v4[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v5; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v6[72]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v7[128]; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)v4 = 132LL;
  v5 = 256LL;
  memset_thunk_772440563353939046(v7, 0, 0x100uLL);
  memset_thunk_772440563353939046(v6, 0, 0x84uLL);
  v3 = 0LL;
  result = RtlQueryPackageClaims(-4LL, v7, &v5, v6, v4, 0LL, &v3, 0LL);
  if ( (int)result >= 0 )
    return RtlStringCbPrintfExW(Buffer, 0x184uLL, 0LL, 0LL, 0, (wchar_t *)L"%s!%s", v7, v6);
  return result;
}
