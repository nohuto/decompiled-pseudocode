/*
 * XREFs of ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18002A810
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180006B60 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007C00 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180010054 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180042348 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::InitAccessibilityAudioSettings(CWindowsPolicyManager *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  HKEY phkResult[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  CWindowsPolicyManager *Data; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+69h] [rbp+21h]
  DWORD Type; // [rsp+70h] [rbp+28h] BYREF
  DWORD cbData; // [rsp+78h] [rbp+30h] BYREF

  Data = this;
  if ( !a2 )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x25D,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v4);
  v13 = 1;
  phkResult[0] = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    phkResult,
    0LL);
  v5 = RegOpenCurrentUser(0x20019u, phkResult);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x262,
           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v5);
  }
  else
  {
    hKey = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    v7 = RegOpenKeyExW(phkResult[0], L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
    if ( v7 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x265,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v7);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    }
    else
    {
      Type = 4;
      cbData = 4;
      LODWORD(Data) = 0;
      if ( !RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, &Type, (LPBYTE)&Data, &cbData)
        && Type == 4
        && cbData == 4 )
      {
        v8 = (int)Data;
      }
      else
      {
        v8 = 0;
        LODWORD(Data) = 0;
      }
      TsSessionIdInitAccessibilityAudioSettings(a2, v8);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
      v6 = 0;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
  RpcRevertToSelf();
  return v6;
}
