/*
 * XREFs of ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640FB0
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1806433A0 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18035233C (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x18063C730 (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063E360 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTi.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EF18 (--1-$test_data_control@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@deta.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EFB0 (--1-$test_watcher@V-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@t.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180640918 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x180641430 (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 *     ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18064236C (-SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@A.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::HandlePhysicalDeviceAccess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  __int64 v2; // rdx
  CloudPCHelpers *v3; // rcx
  HKEY *phkResult; // rax
  unsigned int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  bool IsPhysicalDeviceAccessConfigured; // al
  const char *v9; // r9
  const unsigned __int16 *v10; // r8
  unsigned int Key; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  HKEY *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  BYTE Data[8]; // [rsp+50h] [rbp-298h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-290h] BYREF
  HKEY v20; // [rsp+60h] [rbp-288h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-280h] BYREF
  volatile signed __int32 *v22; // [rsp+70h] [rbp-278h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-270h] BYREF
  _BYTE v24[56]; // [rsp+80h] [rbp-268h] BYREF
  volatile signed __int32 *v25; // [rsp+B8h] [rbp-230h]
  WCHAR pvData[264]; // [rsp+C0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  if ( CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(this) )
  {
    hKey = 0LL;
    phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
    v5 = RegOpenKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
           0,
           2u,
           phkResult);
    if ( v5 != 2 )
    {
      v6 = retaddr;
      if ( v5 )
      {
        v7 = 387LL;
      }
      else
      {
        v5 = RegDeleteValueW(hKey, L"SignOutConfiguredForPhysicalDeviceAccess");
        v6 = retaddr;
        if ( !v5 )
        {
          ExitWindowsEx(4u, 0x80000000);
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
          return;
        }
        v7 = 389LL;
      }
      wil::details::in1diag3::_Log_Win32(
        v6,
        v7,
        (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
        (const char *)v5);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  IsPhysicalDeviceAccessConfigured = CloudPCHelpers::IsPhysicalDeviceAccessConfigured(v3, v2);
  try
  {
    if ( !IsPhysicalDeviceAccessConfigured )
    {
      if ( *((_DWORD *)this + 30) == 1 )
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToAccessPhysicalDevice(this);
      return;
    }
    tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>>((struct wil::details::IFailureCallback *)v24);
    *(_DWORD *)Data = 1;
    v20 = 0LL;
    CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v10);
    CloudPCTelemetryCore::PhysicalDeviceAccessed<unsigned short (&)[260]>(pvData);
    Key = RegDeleteKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess", 0, 0);
    v12 = retaddr;
    if ( Key )
    {
      v13 = 408LL;
    }
    else
    {
      v14 = v25;
      v21 = v25;
      if ( v25 )
        _InterlockedIncrement(v25 + 70);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
      *((_BYTE *)v14 + 272) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v21);
      v15 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v20);
      Key = RegCreateKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
              0,
              0LL,
              1u,
              0x20006u,
              0LL,
              v15,
              0LL);
      v12 = retaddr;
      if ( Key )
      {
        v13 = 411LL;
      }
      else
      {
        v16 = v25;
        v22 = v25;
        if ( v25 )
          _InterlockedIncrement(v25 + 70);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v16 + 2));
        *((_BYTE *)v16 + 273) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v22);
        Key = RegSetValueExW(v20, L"PhysicalDeviceAccessConfigured", 0, 4u, Data, 4u);
        v12 = retaddr;
        if ( Key )
        {
          v13 = 414LL;
        }
        else
        {
          Key = RegSetValueExW(v20, L"PhysicalDeviceAccessed", 0, 4u, Data, 4u);
          v12 = retaddr;
          if ( !Key )
          {
            v17 = v25;
            v23 = v25;
            if ( v25 )
              _InterlockedIncrement(v25 + 70);
            tip2::details::shared_data<1,0,0>::begin_update((__int64)(v17 + 2));
            *((_BYTE *)v17 + 274) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_data_control<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((void **)&v23);
            goto LABEL_28;
          }
          v13 = 416LL;
        }
      }
    }
    wil::details::in1diag3::_Log_Win32(
      v12,
      v13,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      (const char *)Key);
LABEL_28:
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v25 + 2));
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v20);
    tip2::test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>::~test_watcher<tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>>((__int64)v24);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1B1,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v9);
  }
}
