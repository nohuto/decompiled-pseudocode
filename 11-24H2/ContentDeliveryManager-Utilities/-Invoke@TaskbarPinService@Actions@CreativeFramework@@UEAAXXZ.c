/*
 * XREFs of ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?GetAppAUMID@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18009CC90 (-GetAppAUMID@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18009D338 (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::TaskbarPinService::Invoke(
        CreativeFramework::Actions::TaskbarPinService *this,
        const wchar_t *a2,
        bool a3,
        const wchar_t *a4)
{
  char v4; // bl
  CreativeFramework::Actions *v5; // rcx
  const WCHAR *v6; // r8
  const WCHAR *v7; // rdx
  const wchar_t *v8; // rdx
  bool v9; // r8
  const wchar_t *v10; // r9
  CreativeFramework::Actions *v11; // rcx
  CreativeFramework::Actions *v12[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *((_BYTE *)this + 104);
  if ( *((_QWORD *)this + 11) )
  {
    v5 = (CreativeFramework::Actions::TaskbarPinService *)((char *)this + 72);
    if ( *((_QWORD *)v5 + 3) >= 8uLL )
      v5 = *(CreativeFramework::Actions **)v5;
    LOBYTE(a4) = v4;
    CreativeFramework::Actions::PinApp(v5, a2, a3, a4, (bool)v12[0]);
  }
  else
  {
    v6 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v7 = (const WCHAR *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    CreativeFramework::Actions::GetAppAUMID((__int64)v12, v7, v6);
    v11 = (CreativeFramework::Actions *)v12;
    if ( v12[3] >= (CreativeFramework::Actions *)8 )
      v11 = v12[0];
    LOBYTE(v10) = v4;
    CreativeFramework::Actions::PinApp(v11, v8, v9, v10, (bool)v12[0]);
    std::wstring::_Tidy(v12, 1, 0LL);
  }
}
