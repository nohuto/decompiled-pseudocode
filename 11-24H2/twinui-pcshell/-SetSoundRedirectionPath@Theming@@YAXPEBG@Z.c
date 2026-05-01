/*
 * XREFs of ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x1800F1F88
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x18010E724 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall Theming::SetSoundRedirectionPath(BYTE *lpData, const unsigned __int16 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  DWORD v5; // r15d
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  DWORD v8; // esi
  HKEY *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  HKEY *v12; // rax
  HKEY *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int dwOptions; // [rsp+20h] [rbp-30h]
  unsigned int dwOptionsa; // [rsp+20h] [rbp-30h]
  unsigned int dwOptionsb; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HKEY hKey; // [rsp+70h] [rbp+20h] BYREF

  hKey = 0LL;
  if ( lpData )
  {
    v3 = -1LL;
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&lpData[2 * v4] );
    v5 = 2 * v4 + 2;
    phkResult = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
    Key = RegCreateKeyExW(HKEY_CURRENT_USER, L"AppEvents\\schemes", 0, 0LL, 0, 2u, 0LL, phkResult, 0LL);
    if ( Key )
    {
      v15 = 20LL;
    }
    else
    {
      Key = RegSetValueExW(hKey, L"packagebase", 0, 1u, lpData, v5);
      if ( !Key )
        goto LABEL_6;
      v15 = 38LL;
    }
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)v15,
      (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
      (const char *)Key,
      dwOptions);
LABEL_6:
    if ( hKey )
      RegCloseKey(hKey);
    do
      ++v3;
    while ( *(_WORD *)&lpData[2 * v3] );
    hKey = 0LL;
    v8 = 2 * v3 + 2;
    v9 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
    v10 = RegCreateKeyExW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides",
            0,
            0LL,
            0,
            2u,
            0LL,
            v9,
            0LL);
    if ( v10 )
    {
      v11 = 20LL;
    }
    else
    {
      v10 = RegSetValueExW(hKey, L"packagebase", 0, 1u, lpData, v8);
      if ( !v10 )
        goto LABEL_14;
      v11 = 38LL;
    }
    goto LABEL_27;
  }
  v13 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v14 = RegOpenKeyExW(HKEY_CURRENT_USER, L"AppEvents\\schemes", 0, 2u, v13);
  if ( v14 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x1D,
      (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
      (const char *)v14,
      dwOptionsb);
  else
    RegDeleteValueW(hKey, L"packagebase");
  if ( hKey )
    RegCloseKey(hKey);
  hKey = 0LL;
  v12 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v10 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\CurrentVersion\\EditionOverrides", 0, 2u, v12);
  if ( !v10 )
  {
    RegDeleteValueW(hKey, L"packagebase");
    goto LABEL_14;
  }
  v11 = 29LL;
LABEL_27:
  wil::details::in1diag3::_Log_Win32(
    retaddr,
    (void *)v11,
    (unsigned int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\dynamic_config.h",
    (const char *)v10,
    dwOptionsa);
LABEL_14:
  if ( hKey )
    RegCloseKey(hKey);
}
