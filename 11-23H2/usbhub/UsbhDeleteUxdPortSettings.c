/*
 * XREFs of UsbhDeleteUxdPortSettings @ 0x1C0059B28
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C0059BF8 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 *     RtlStringCbPrintfW @ 0x1C0044C1C (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall UsbhDeleteUxdPortSettings(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  int v4; // edx
  int v5; // r8d
  wchar_t pszDest[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      29,
      (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
      (__int64)pszDest);
  return RtlDeleteRegistryValue(0x40000000u, a2, pszDest);
}
