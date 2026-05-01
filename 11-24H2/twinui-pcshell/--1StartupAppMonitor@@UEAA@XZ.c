/*
 * XREFs of ??1StartupAppMonitor@@UEAA@XZ @ 0x180583A10
 * Callers:
 *     ??_EStartupAppMonitor@@UEAAPEAXI@Z @ 0x180584058 (--_EStartupAppMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004C97C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801D74B4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??1thread@std@@QEAA@XZ @ 0x1802CF1D4 (--1thread@std@@QEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D4CD0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180584D10 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 */

void __fastcall StartupAppMonitor::~StartupAppMonitor(StartupAppMonitor *this, void *a2)
{
  wil::details **v3; // r15
  _Thrd_t *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  StartupAppMonitor *j; // rbx
  void *v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  std::_Ref_count_base *v12; // rcx
  _Thrd_t v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

  *(_QWORD *)this = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<CServiceHostComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 5) = &StartupAppMonitor::`vftable'{for `IServiceHostComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CServiceHostComponentWithGITSite,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &StartupAppMonitor::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>>'};
  v3 = (wil::details **)((char *)this + 176);
  wil::details::SetEvent(*((wil::details **)this + 22), a2);
  v4 = (_Thrd_t *)((char *)this + 160);
  if ( !*((_DWORD *)this + 42) )
  {
    std::_Throw_Cpp_error(1);
    __debugbreak();
    JUMPOUT(0x180583BF5LL);
  }
  if ( *((_DWORD *)this + 42) == _Thrd_id() )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
  }
  v13 = *v4;
  if ( _Thrd_join(&v13, 0LL) )
  {
    std::_Throw_Cpp_error(2);
    __debugbreak();
  }
  v14 = 0LL;
  *v4 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 18);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (wil::details::registry_watcher_state **)(i[2] + 96LL),
      0LL);
  for ( j = (StartupAppMonitor *)((char *)this + 496);
        j != (StartupAppMonitor *)((char *)this + 672);
        j = (StartupAppMonitor *)((char *)j + 88) )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
      (char *)j + 80,
      0LL);
  }
  `eh vector destructor iterator'((char *)this + 496, 88LL, 2LL, (void (__fastcall *)(char *))FOLDERINFO::~FOLDERINFO);
  `eh vector destructor iterator'((char *)this + 184, 104LL, 3LL, (void (__fastcall *)(char *))REGKEYINFO::~REGKEYINFO);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    v3,
    v8);
  std::thread::~thread((StartupAppMonitor *)((char *)this + 160));
  v9 = (_QWORD **)*((_QWORD *)this + 18);
  *v9[1] = 0LL;
  v10 = *v9;
  if ( *v9 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      v12 = (std::_Ref_count_base *)v10[3];
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x20);
      v10 = v11;
    }
    while ( v11 );
  }
  std::_Deallocate<16,0>(*((void **)this + 18), (const struct std::nothrow_t *)0x20);
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CServiceHostComponentWithGITSite>,Microsoft::WRL::FtmBase>(this);
}
