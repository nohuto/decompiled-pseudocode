/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ @ 0x180352474
 * Callers:
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x180352448 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnCADScreenEnabled(CloudPCHelpers *this)
{
  unsigned int ValueW; // eax
  int v2; // eax
  int v4; // [rsp+40h] [rbp-18h] BYREF
  DWORD v5; // [rsp+44h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  v5 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
             L"EnablePhysicalDeviceAccessOnCtrlAltDel",
             0x10u,
             0LL,
             &v4,
             &v5);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      86LL,
      (__int64)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\cloudpccommon.h",
      (const char *)ValueW);
    LOBYTE(v2) = 0;
  }
  else
  {
    return v4 == 1;
  }
  return v2;
}
