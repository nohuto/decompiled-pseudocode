/*
 * XREFs of ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x18035EAA4
 * Callers:
 *     ?WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z @ 0x18035EBD0 (-WriteKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1K@Z.c)
 *     ?WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z @ 0x18035EC30 (-WriteKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@11@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WriteKey(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        BYTE *lpData,
        DWORD cbData,
        DWORD dwType)
{
  HKEY *phkResult; // rbx
  const WCHAR *StringRawBuffer; // rax
  unsigned int Key; // eax
  __int64 v13; // rdx
  const WCHAR *v14; // rax
  unsigned int v15; // ebx
  HKEY hKey; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  Key = RegCreateKeyExW(a2, StringRawBuffer, 0, 0LL, 0, 0x20006u, 0LL, phkResult, 0LL);
  if ( Key )
  {
    v13 = 2348LL;
  }
  else
  {
    v14 = WindowsGetStringRawBuffer(a4, 0LL);
    Key = RegSetValueExW(hKey, v14, 0, dwType, lpData, cbData);
    if ( !Key )
    {
      v15 = 0;
      goto LABEL_7;
    }
    v13 = 2356LL;
  }
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)Key);
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v15;
}
