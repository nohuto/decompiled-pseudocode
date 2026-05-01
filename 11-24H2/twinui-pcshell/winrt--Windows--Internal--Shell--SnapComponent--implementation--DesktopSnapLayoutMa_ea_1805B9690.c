/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805B9690
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x1805B95D4 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180048B14 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH@Z @ 0x1805B6CF8 (--$_Emplace_reallocate@$$V@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEA_K@Z @ 0x1805B7604 (--$_Reallocate@$0A@@-$vector@HV-$allocator@H@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1805B79D4 (--$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_ @ 0x1805B898C (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launc.c)
 *     ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x1805C1DCC (-TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(
        char *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  const char *v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  signed int v13; // r8d
  void (__fastcall *v14)(_QWORD, _QWORD, __int64); // rax
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64); // r12
  _BYTE *v18; // rdx
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // r15
  unsigned int *j; // rsi
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // r8
  unsigned int i; // r15d
  __int64 v27; // rsi
  unsigned int v28; // r13d
  int v29; // ecx
  __int64 v30; // r12
  unsigned int v31; // r8d
  __int64 v32; // r9
  int v33; // eax
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_46;
      case 2:
        *((_QWORD *)a1 + 2) = *(_QWORD *)(a1 + 217);
        winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
          (_QWORD *)a1 + 3,
          (__int64 (__fastcall *)(__int64, GUID *, void *, __int64 *))IUnknown_QueryService,
          (__int64 *)a1 + 2);
        *((_QWORD *)a1 + 4) = 0LL;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_QWORD *)a1 + 6) = 0LL;
        v5 = (const char *)0xCCCCCCCCCCCCCCCDLL;
        v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 201) - *(_QWORD *)(a1 + 193)) >> 3);
        *((_QWORD *)a1 + 22) = v6;
        if ( v6 )
        {
          if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
            std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
          std::vector<int>::_Reallocate<0>((__int64)(a1 + 32), (unsigned __int64 *)a1 + 22);
        }
        v7 = *(_QWORD *)(a1 + 193);
        v8 = *(_QWORD *)(a1 + 201);
        break;
      case 4:
        for ( i = 0; ; ++i )
        {
          v27 = *(_QWORD *)(a1 + 193);
          if ( i >= 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 201) - v27) >> 3) )
            break;
          v28 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL * i);
          v29 = *(_DWORD *)(v27 + 40LL * i);
          if ( v29 )
          {
            if ( v29 != 1 )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x218,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
                a4);
            v30 = v27 + 40LL * i;
            if ( SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId(
                   (SnapLauncher *)(v30 + 8),
                   (const struct winrt::hstring *)(v27 + 16 + 40LL * i),
                   (const struct winrt::hstring *)v28,
                   (int)a4) )
            {
              v32 = *(unsigned int *)(v27 + 40LL * i);
              LOBYTE(v32) = (_DWORD)v32 == 1;
              v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 96LL))(
                      *((_QWORD *)a1 + 3),
                      v28,
                      *(unsigned int *)(a1 + 233),
                      v32);
              if ( v33 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x21D,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
                  (const char *)(unsigned int)v33);
            }
            else
            {
              *((_QWORD *)a1 + 16) = 0LL;
              winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 16, (__int64 *)(v30 + 8), v31);
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 120LL))(
                *((_QWORD *)a1 + 3),
                *((_QWORD *)a1 + 16),
                *(unsigned int *)(a1 + 233));
              wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 16);
            }
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x214,
              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
              (const char *)0x80004001LL);
          }
        }
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_46;
      case 5:
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_46;
      default:
        __debugbreak();
        return;
    }
    while ( 1 )
    {
      if ( v7 == v8 )
      {
        v25 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 201) - *(_QWORD *)(a1 + 193)) >> 3);
        if ( v25 != (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1F8,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
            v5);
        a1[120] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(
          (__int64)retaddr,
          (void (*)(void *, void *))a1,
          (void *)v25);
        return;
      }
      v9 = (int)(float)(*(float *)(v7 + 28) + *(float *)(v7 + 36));
      v10 = (int)(float)(*(float *)(v7 + 24) + *(float *)(v7 + 32));
      v11 = (int)*(float *)(v7 + 28);
      v12 = (int)*(float *)(v7 + 24);
      *(_OWORD *)(a1 + 72) = 0LL;
      *((float *)a1 + 18) = (float)v12;
      *((float *)a1 + 19) = (float)v11;
      *((float *)a1 + 20) = (float)(v10 - v12);
      v13 = v9 - v11;
      *((float *)a1 + 21) = (float)v13;
      *(_OWORD *)(a1 + 56) = *(_OWORD *)(a1 + 72);
      if ( *(_DWORD *)v7 == 1 )
      {
        *((_QWORD *)a1 + 11) = 0LL;
        winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 11, (__int64 *)(v7 + 8), v13);
        v14 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)a1 + 3) + 104LL);
        v15 = *(unsigned int *)(a1 + 233);
        *((_OWORD *)a1 + 9) = *(_OWORD *)(a1 + 56);
        v14(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 11), v15);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 11);
      }
      v16 = *((_QWORD *)a1 + 3);
      v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL);
      v18 = (_BYTE *)*((_QWORD *)a1 + 5);
      if ( v18 == *((_BYTE **)a1 + 6) )
      {
        std::vector<int>::_Emplace_reallocate<>((const void **)a1 + 4, v18);
      }
      else
      {
        *(_DWORD *)v18 = 0;
        *((_QWORD *)a1 + 5) += 4LL;
      }
      *((_OWORD *)a1 + 10) = *(_OWORD *)(a1 + 56);
      v19 = v17(v16);
      if ( v19 < 0 )
        break;
      v7 += 40LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)(unsigned int)v19);
    v21 = *((_QWORD *)a1 + 5) - 4LL;
    *((_QWORD *)a1 + 5) = v21;
    for ( j = (unsigned int *)*((_QWORD *)a1 + 4); j != (unsigned int *)v21; ++j )
    {
      *((_OWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 80LL))(*((_QWORD *)a1 + 3), *j);
    }
    v23 = *(_QWORD *)(a1 + 193);
    v24 = *(_QWORD *)(a1 + 201);
    while ( v23 != v24 )
    {
      if ( *(_DWORD *)v23 == 1 )
      {
        *((_QWORD *)a1 + 14) = 0LL;
        winrt::hstring::operator=((struct winrt::impl::hstring_header **)a1 + 14, (__int64 *)(v23 + 8), v20);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 3) + 120LL))(
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 14),
          *(unsigned int *)(a1 + 233));
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>((HSTRING *)a1 + 14);
      }
      v23 += 40LL;
    }
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)(a1 + 32));
    if ( *((_QWORD *)a1 + 3) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 3);
LABEL_46:
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::__parameters_((__int64)(a1 + 193));
    if ( *((_WORD *)a1 + 5) )
      operator delete(a1, (const struct std::nothrow_t *)0x100);
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
