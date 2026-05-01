/*
 * XREFs of ??1BroadcastDVRComponent@@UEAA@XZ @ 0x18029A2A0
 * Callers:
 *     ??_GBroadcastDVRComponent@@UEAAPEAXI@Z @ 0x180235C8C (--_GBroadcastDVRComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x18001BD30 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18005C468 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800634D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x1800C9398 (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180232D88 (-clear@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroad.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18029A46C (--1-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcast.c)
 *     ??1?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ @ 0x18029A4F4 (--1-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ.c)
 *     ?UnregisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x18029A514 (-UnregisterNotifications@BroadcastDVRComponent@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BroadcastDVRComponent::~BroadcastDVRComponent(BroadcastDVRComponent *this)
{
  REGHANDLE v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &BroadcastDVRComponent::`vftable'{for `IBroadcastDVRComponent'};
  *((_QWORD *)this + 1) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 2) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 7) = &BroadcastDVRComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 15) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 16) = &BroadcastDVRComponent::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 17) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 19) = &BroadcastDVRComponent::`vftable';
  *((_QWORD *)this + 20) = &BroadcastDVRComponent::`vftable'{for `IGameFocusNotificationService'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = qword_1808C4080;
  dword_1808C4060 = 0;
  qword_1808C4080 = 0LL;
  EventUnregister(v2);
  BroadcastDVRComponent::UnregisterNotifications(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::clear((_QWORD *)this + 33);
  GameDVR_OutputDebug::s_fOutputToDebugger = 0;
  EnterCriticalSection(&GameDVR_OutputDebug::s_csLock);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &GameDVR_OutputDebug::s_hTraceOutputFile,
    0LL);
  LeaveCriticalSection(&GameDVR_OutputDebug::s_csLock);
  std::unique_ptr<JsonGameMruManager>::~unique_ptr<JsonGameMruManager>((char *)this + 560);
  CGITRegistrationList::~CGITRegistrationList((BroadcastDVRComponent *)((char *)this + 512));
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 50);
  std::vector<Windows::Internal::String>::_Tidy((__int64)this + 352);
  std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>((__int64 *)this + 41);
  std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>((__int64 *)this + 38);
  std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>((__int64 *)this + 35);
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::~_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>((char *)this + 264);
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  *((_DWORD *)this + 55) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>(this);
}
