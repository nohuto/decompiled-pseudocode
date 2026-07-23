/*
 * XREFs of PipHardwareConfigClearStartOverrideCallback @ 0x140717AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrideCallback(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-238h] BYREF

  Handle[0] = 0LL;
  if ( RtlStringCchPrintfExW(pszDest, 0x104uLL, 0LL, 0LL, 0x800u, L"%s\\%s", a3, L"StartOverride") >= 0
    && (int)PnpCtxRegOpenKey(a1, a2, (unsigned int)pszDest, 0, 2, (__int64)Handle) >= 0 )
  {
    PnpCtxRegDeleteValue(v7, Handle[0], a4);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
