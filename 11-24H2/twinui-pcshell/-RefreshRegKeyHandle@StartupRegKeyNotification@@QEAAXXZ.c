/*
 * XREFs of ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180586180
 * Callers:
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058439C (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18014B430 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall StartupRegKeyNotification::RefreshRegKeyHandle(StartupRegKeyNotification *this)
{
  char *v1; // rbx
  __int64 v3; // rsi
  HKEY *v4; // rax
  unsigned int v5; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (char *)this + 80;
  v3 = std::wstring::find((char *)this + 80, L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run", 0LL);
  v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)this + 8);
  if ( *((_QWORD *)v1 + 3) > 7uLL )
    v1 = *(char **)v1;
  v5 = RegOpenKeyExW(*((HKEY *)this + 9), (LPCWSTR)v1, 0, v3 != 0 ? 281 : 537, v4);
  if ( v5 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      281LL,
      (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)v5,
      phkResult);
}
