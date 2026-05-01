/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForExe @ 0x1805483A4
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180548B88 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x1802D37A0 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?DecodeRelativePath@@YAJPEA_W_KPEB_W@Z @ 0x180547F9C (-DecodeRelativePath@@YAJPEA_W_KPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=4
wchar_t *__fastcall anonymous_namespace_::GetFriendlyNameForExe(wchar_t *a1, const wchar_t *a2)
{
  int v3; // eax
  __int64 v4; // rax
  void *v5; // rcx
  HRESULT v6; // eax
  HRESULT v7; // eax
  LPVOID pv; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v12[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v12[1] = a1;
  v10 = 0;
  v3 = DecodeRelativePath(pszPath, (__int64)a2, a2);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v3,
      (int)pv);
  *(_QWORD *)a1 = 0LL;
  v10 = 1;
  ppv = 0LL;
  if ( SHCreateItemFromParsingName(pszPath, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &ppv) >= 0 )
  {
    pv = 0LL;
    v4 = *(_QWORD *)ppv;
    pv = 0LL;
    (*(void (__fastcall **)(void *, const PROPERTYKEY *, LPVOID *))(v4 + 136))(ppv, &PKEY_FileDescription, &pv);
    v5 = pv;
    if ( pv )
    {
      v12[0] = (const wchar_t *)pv;
      v6 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)a1, v12);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x69,
          (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
          (const char *)(unsigned int)v6,
          (int)pv);
      v5 = pv;
    }
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( !*(_QWORD *)a1 )
  {
    v12[0] = PathFindFileNameW(pszPath);
    v7 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)a1, v12);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F,
        (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v7,
        (int)pv);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
