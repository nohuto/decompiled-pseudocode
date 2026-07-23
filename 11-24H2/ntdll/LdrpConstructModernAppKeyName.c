/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800A3518
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180008FD0 (RtlQueryPackageClaims.c)
 *     RtlStringCbPrintfExW @ 0x1800092E0 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpConstructModernAppKeyName(wchar_t *Buffer)
{
  NTSTATUS result; // eax
  _PS_PKG_CLAIM PkgClaim; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR AppIdSize; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR AppId[72]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+F0h] [rbp-10h] BYREF

  AppIdSize = 132LL;
  PackageSize[0] = 256LL;
  memset_thunk_772440563353939046(PackageFullName, 0, 0x100uLL);
  memset_thunk_772440563353939046(AppId, 0, 0x84uLL);
  PkgClaim = 0LL;
  result = RtlQueryPackageClaims(
             (HANDLE)0xFFFFFFFFFFFFFFFCLL,
             PackageFullName,
             PackageSize,
             AppId,
             &AppIdSize,
             0LL,
             &PkgClaim,
             0LL);
  if ( result >= 0 )
    return RtlStringCbPrintfExW(Buffer, 0x184uLL, 0LL, 0LL, 0, (wchar_t *)L"%s!%s", PackageFullName, AppId);
  return result;
}
