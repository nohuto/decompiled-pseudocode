/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C36C
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18005C100 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180034E30 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004B940 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004F6C4 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180051A30 (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18005D638 (-OnCacheTimer@InputSinkDataCache@@QEAAXXZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D664 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009E420 (IsGetMPCInputPostProcessorPresent.c)
 *     ??R?$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z @ 0x1800A31B8 (--R-$default_delete@VSessionMonitor@@@std@@QEBAXPEAVSessionMonitor@@@Z.c)
 *     ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800A4A38 (-Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x1800EFE14 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x18010B6BC (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18019ECA8 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  __int64 *v3; // r14
  int v4; // eax
  const char *v5; // r9
  __int64 *Instance; // r13
  struct IMessageSession *v7; // rsi
  __int64 (__fastcall *v8)(struct IMessageSession *, __int64 (__fastcall *)(void *), __int64 *, __int64 *); // rdi
  int v9; // eax
  struct ISystemInputRouter **v10; // rdi
  char MPCInputPostProcessorPresent; // al
  struct ISystemInputRouter **v12; // r8
  struct IInputFocusListener *v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  const char *v21; // r9
  int v22; // eax
  const char *v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v28; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IMessageSession *v30; // [rsp+60h] [rbp+30h] BYREF
  struct SessionMonitor *v31; // [rsp+70h] [rbp+40h] BYREF

  v3 = *(__int64 **)&OneCoreUAPInputHost::s_pInputHost;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  v4 = CoreUICreate(&v30);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v28);
  (*(void (__fastcall **)(struct IMessageSession *, int (*)(void *, bool, struct _FILETIME *), __int64 *))(*(_QWORD *)v30 + 256LL))(
    v30,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v5);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    NtMITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  ISMStatics::GetForegroundManager();
  ISMStatics::GetInputSiteHierarchyManager();
  Instance = (__int64 *)InputSinkDataCache::GetInstance();
  v7 = v30;
  v8 = *(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(void *), __int64 *, __int64 *))(*(_QWORD *)v30 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(Instance + 12);
  v9 = v8(v7, InputSinkDataCache::OnCacheTimerStatic, Instance, Instance + 12);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\inp"
                    "utsinkdatacache.cpp",
      (const char *)(unsigned int)v9,
      v28);
  InputSinkDataCache::OnCacheTimer((InputSinkDataCache *)Instance);
  v10 = (struct ISystemInputRouter **)(v3 + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3 + 7);
  v3[7] = 0LL;
  MPCInputPostProcessorPresent = IsGetMPCInputPostProcessorPresent(v3 + 1);
  v12 = (struct ISystemInputRouter **)(v3 + 7);
  v13 = (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL));
  if ( MPCInputPostProcessorPresent )
  {
    v14 = MPCInputRouter::Create(a2, v13, v12);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 30LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
        (const char *)(unsigned int)v14,
        v28);
      goto LABEL_13;
    }
  }
  else
  {
    v14 = DWMInputRouter::Create(a2, v13, v12);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 34LL;
      goto LABEL_9;
    }
  }
  v15 = 0;
LABEL_13:
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v15,
      v28);
  v17 = v3 + 8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3 + 8);
  v20 = InputStateManager::Create(*v10, (struct IRawInputClient **)v3 + 8, v18, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v20,
      v28);
  v22 = InputProviderManager::InitializeHelper((__int64)(v3 + 9), *v17, 0, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v22,
      v28);
  if ( IsEdition(10LL) )
  {
    v31 = 0LL;
    SessionMonitor::Create(
      (struct ISessionMonitorOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
      v30,
      &v31);
    v24 = v3[15];
    v3[15] = (__int64)v31;
    if ( v24 )
      std::default_delete<SessionMonitor>::operator()();
  }
  else if ( IsEdition(253345LL) )
  {
    v25 = RotationWatcher::Initialize();
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v25,
        v28);
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v23);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3 + 13);
    v26 = Win32kInterop::Create((struct IRawInputClient *)*v17, *v10, (struct Win32kInterop **)v3 + 13);
    if ( v26 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x77,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v26,
        v28);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  return 0LL;
}
