/*
 * XREFs of ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180215E78
 * Callers:
 *     ?GetForWorkArea@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAPEAX@Z @ 0x180215E40 (-GetForWorkArea@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x1801CE1EC (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801F813C (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180210C8C (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$capture@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x1805B7A48 (--$capture@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805B8120 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805B8ADC (--1-$test_data_control@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805B8B14 (--1-$test_watcher@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@.c)
 *     ?DesktopSnapLayoutManagerOutOfProc@CSnapComponentTelemetry@@SAXXZ @ 0x1805B8EE0 (-DesktopSnapLayoutManagerOutOfProc@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?GetForWorkArea@?$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1805B8FD0 (-GetForWorkArea@-$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionS.c)
 *     ?TryGetProcessImageName@SnapTipTestHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1805BA774 (-TryGetProcessImageName@SnapTipTestHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetForWorkArea(
        _QWORD *a1,
        __int64 a2)
{
  HWND ShellWindow; // rax
  HANDLE CurrentProcess; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  int v8; // esi
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  _DWORD *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *Instance; // rax
  void (__fastcall ***v18)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v20; // [rsp+20h] [rbp-B9h] BYREF
  DWORD dwProcessId; // [rsp+28h] [rbp-B1h] BYREF
  IUnknown *pUnk; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+50h] [rbp-89h] BYREF
  __int64 v26; // [rsp+58h] [rbp-81h] BYREF
  __int64 v27; // [rsp+60h] [rbp-79h] BYREF
  __int64 v28; // [rsp+68h] [rbp-71h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v30[56]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-21h]
  GUID v32; // [rsp+C0h] [rbp-19h] BYREF
  void *v33[4]; // [rsp+D0h] [rbp-9h] BYREF

  v24[0] = (__int64)a1;
  dwProcessId = 0;
  ShellWindow = GetShellWindow();
  GetWindowThreadProcessId(ShellWindow, &dwProcessId);
  if ( dwProcessId == GetCurrentProcessId() )
  {
    Instance = winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance();
    v18 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetOrCreateForWorkArea(
                                                                  (__int64)Instance,
                                                                  v24,
                                                                  (struct winrt::Windows::Foundation::Rect *)a2);
    if ( v18 )
    {
      v20 = 0LL;
      (**v18)(
        v18,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>,
        &v20);
      *a1 = v20;
    }
    else
    {
      *a1 = 0LL;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v24);
  }
  else
  {
    CSnapComponentTelemetry::DesktopSnapLayoutManagerOutOfProc();
    tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>>((struct wil::details::IFailureCallback *)v30);
    CurrentProcess = GetCurrentProcess();
    SnapTipTestHelpers::TryGetProcessImageName(v33, CurrentProcess);
    if ( v33[2] )
    {
      v6 = v31;
      v25 = v31;
      if ( v31 )
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 328));
      tip2::details::shared_data<0,0,1>::begin_update(v6 + 8);
      std::wstring::operator=((char *)(v6 + 272), (char *)v33, v7);
      tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v25);
    }
    v8 = (int)(float)(*(float *)(a2 + 4) + *(float *)(a2 + 12));
    v9 = (int)(float)(*(float *)a2 + *(float *)(a2 + 8));
    v10 = (int)*(float *)(a2 + 4);
    v11 = (int)*(float *)a2;
    v12 = (_DWORD *)v31;
    v26 = v31;
    if ( v31 )
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 328));
    tip2::details::shared_data<0,0,1>::begin_update(v12 + 2);
    v12[77] = v11;
    v12[78] = v10;
    v12[79] = v9;
    v12[80] = v8;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v26);
    v32 = CLSID_ImmersiveShell;
    winrt::create_instance<IServiceProvider>((__int64)&v23, (int)&v32);
    v13 = v31;
    v27 = v31;
    if ( v31 )
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 328));
    tip2::details::shared_data<0,0,1>::begin_update(v13 + 8);
    *(_BYTE *)(v13 + 304) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v27);
    v14 = v23;
    v28 = v23;
    winrt::capture<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
      &pUnk,
      IUnknown_QueryService,
      &v28,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>);
    v15 = v31;
    v29 = v31;
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 328));
      v14 = v23;
    }
    tip2::details::shared_data<0,0,1>::begin_update(v15 + 8);
    *(_BYTE *)(v15 + 305) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v29);
    CoAllowSetForegroundWindow(pUnk, 0LL);
    winrt::impl::consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetForWorkArea(
      &pUnk,
      &v20,
      a2);
    tip2::details::shared_data<0,0,0>::complete_without_lock(v31 + 8);
    v16 = v20;
    v20 = 0LL;
    *a1 = v16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pUnk);
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v23);
    std::wstring::_Tidy_deallocate(v33);
    tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(v30);
  }
  return a1;
}
