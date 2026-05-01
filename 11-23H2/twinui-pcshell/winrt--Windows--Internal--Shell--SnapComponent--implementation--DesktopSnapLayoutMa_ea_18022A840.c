/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x18022A728 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801626F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 *     ??$emplace_back@$$V@?$vector@HV?$allocator@H@std@@@std@@QEAA?A_TXZ @ 0x180229CBC (--$emplace_back@$$V@-$vector@HV-$allocator@H@std@@@std@@QEAA-A_TXZ.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_ @ 0x18022A264 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_18022A264.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@V-$vector@USnapLaunchTarg.c)
 *     ?reserve@?$vector@HV?$allocator@H@std@@@std@@QEAAX_K@Z @ 0x18022B5F4 (-reserve@-$vector@HV-$allocator@H@std@@@std@@QEAAX_K@Z.c)
 *     ?size@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEBA_KXZ @ 0x18022B700 (-size@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x18022E03C (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180681FFC (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r15
  int v5; // r8d
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  signed int v9; // r8d
  void (__fastcall *v10)(_QWORD, _QWORD, __int64); // rax
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 (__fastcall *v13)(__int64, char *, char *); // r13
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // r15
  unsigned int *i; // rsi
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rax
  wil::details::in1diag3 *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  const char *v27; // r9
  __int64 v28; // rsi
  __int64 v29; // r14
  unsigned int v30; // r13d
  int v31; // ecx
  __int64 v32; // r12
  unsigned int v33; // r8d
  __int64 v34; // r9
  int v35; // eax
  int j; // r15d
  int v37; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_39;
    case 2:
      *((_QWORD *)a1 + 2) = *(_QWORD *)(a1 + 217);
      winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        a1 + 24,
        IUnknown_QueryService);
      *((_QWORD *)a1 + 4) = 0LL;
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = 0LL;
      v2 = std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::size(a1 + 193);
      std::vector<int>::reserve(a1 + 32, v2);
      v3 = *(_QWORD *)(a1 + 193);
      v4 = *(_QWORD *)(a1 + 201);
      break;
    case 4:
      goto LABEL_43;
    case 5:
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
      if ( *((_QWORD *)a1 + 3) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
      goto LABEL_39;
    default:
      __debugbreak();
      return;
  }
  while ( v3 != v4 )
  {
    v5 = (int)(float)(*(float *)(v3 + 28) + *(float *)(v3 + 36));
    v6 = (int)(float)(*(float *)(v3 + 24) + *(float *)(v3 + 32));
    v7 = (int)*(float *)(v3 + 28);
    v8 = (int)*(float *)(v3 + 24);
    *((float *)a1 + 18) = (float)v8;
    *((float *)a1 + 19) = (float)v7;
    *((float *)a1 + 20) = (float)(v6 - v8);
    v9 = v5 - v7;
    *((float *)a1 + 21) = (float)v9;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a1 + 72);
    if ( *(_DWORD *)v3 == 1 )
    {
      *((_QWORD *)a1 + 11) = 0LL;
      winrt::hstring::operator=((volatile signed __int32 **)a1 + 11, (winrt::impl **)(v3 + 8), v9);
      v10 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 96LL);
      v11 = *(unsigned int *)(a1 + 233);
      *((_OWORD *)a1 + 10) = *(_OWORD *)(a1 + 56);
      v10(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 11), v11);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>((HSTRING *)a1 + 11);
    }
    v12 = *((_QWORD *)a1 + 3);
    v13 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v12 + 72LL);
    v14 = std::vector<int>::emplace_back<>((__int64)(a1 + 32));
    *((_OWORD *)a1 + 11) = *(_OWORD *)(a1 + 56);
    v15 = v13(v12, a1 + 176, v14);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C4,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
        (const char *)(unsigned int)v15);
      v17 = *((_QWORD *)a1 + 5) - 4LL;
      *((_QWORD *)a1 + 5) = v17;
      for ( i = (unsigned int *)*((_QWORD *)a1 + 4); i != (unsigned int *)v17; ++i )
        (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)a1 + 3) + 80LL))(
          *((_QWORD *)a1 + 3),
          *i,
          a1 + 96);
      v19 = *(_QWORD *)(a1 + 193);
      v20 = *(_QWORD *)(a1 + 201);
      while ( v19 != v20 )
      {
        if ( *(_DWORD *)v19 == 1 )
        {
          *((_QWORD *)a1 + 14) = 0LL;
          winrt::hstring::operator=((volatile signed __int32 **)a1 + 14, (winrt::impl **)(v19 + 8), v16);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 112LL))(
            *((_QWORD *)a1 + 3),
            *((_QWORD *)a1 + 14),
            *(unsigned int *)(a1 + 233));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>((HSTRING *)a1 + 14);
        }
        v19 += 40LL;
      }
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
      if ( *((_QWORD *)a1 + 3) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
      goto LABEL_38;
    }
    v3 += 40LL;
  }
  v21 = std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::size(a1 + 193);
  if ( v21 != v23 )
    wil::details::in1diag3::_FailFast_Unexpected(
      v22,
      (void *)0x1E2,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)v22);
  a1[120] = 0;
  *((_QWORD *)a1 + 16) = a1 + 120;
  if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
  {
    *((_WORD *)a1 + 4) = 4;
    ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
      v24,
      a1);
    return;
  }
LABEL_43:
  _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
  for ( j = 0; ; ++j )
  {
    v25 = std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::size(a1 + 193);
    if ( v26 >= v25 )
      break;
    v28 = 5 * v26;
    v29 = *(_QWORD *)(a1 + 193);
    v30 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4 * v26);
    v31 = *(_DWORD *)(v29 + 40 * v26);
    if ( v31 )
    {
      if ( v31 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x202,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
          v27);
      v32 = v29 + 40 * v26;
      if ( SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId(
             (SnapLauncher *)(v32 + 8),
             (const struct winrt::hstring *)(v29 + 16 + 40 * v26),
             (const struct winrt::hstring *)v30,
             (int)v27) )
      {
        v34 = *(unsigned int *)(v29 + 8 * v28);
        LOBYTE(v34) = (_DWORD)v34 == 1;
        v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 88LL))(
                *((_QWORD *)a1 + 3),
                v30,
                *(unsigned int *)(a1 + 233),
                v34);
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x207,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            (const char *)(unsigned int)v35);
      }
      else
      {
        *((_QWORD *)a1 + 17) = 0LL;
        winrt::hstring::operator=((volatile signed __int32 **)a1 + 17, (winrt::impl **)(v32 + 8), v33);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 112LL))(
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 17),
          *(unsigned int *)(a1 + 233));
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>((HSTRING *)a1 + 17);
      }
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x1FE,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
        (const char *)0x80004001LL,
        v37);
    }
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
  if ( *((_QWORD *)a1 + 3) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
LABEL_38:
  std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
    a1,
    a1 + 144);
LABEL_39:
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_((__int64)(a1 + 193));
  if ( *((_WORD *)a1 + 5) )
    operator delete(a1);
}
