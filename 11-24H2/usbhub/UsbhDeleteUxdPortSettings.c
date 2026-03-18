/*
 * XREFs of UsbhDeleteUxdPortSettings @ 0x14005EABC
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x14002ABAC (UsbhDeleteUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140025D00 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x140048F98 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
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
