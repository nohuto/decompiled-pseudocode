/*
 * XREFs of ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A2C6C
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800A2E94 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Optional_destruct_base@VInputProviderManager@@$0A@@std@@QEAA@XZ @ 0x1800A2C30 (--1-$_Optional_destruct_base@VInputProviderManager@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VSessionMonitor@@U?$default_delete@VSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x1800A2C4C (--1-$unique_ptr@VSessionMonitor@@U-$default_delete@VSessionMonitor@@@std@@@std@@QEAA@XZ.c)
 *     ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x1800A2E30 (--_GInputProviderManager@@QEAAPEAXI@Z.c)
 */

void __fastcall OneCoreUAPInputHost::~OneCoreUAPInputHost(OneCoreUAPInputHost *this, unsigned int a2)
{
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx
  unsigned int v5; // edx

  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `ISessionMonitorOwner'};
  *((_QWORD *)this + 3) = &OneCoreUAPInputHost::`vftable'{for `IInkCanvasInputHost'};
  *((_QWORD *)this + 4) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 96) )
  {
    InputProviderManager::`scalar deleting destructor'((OneCoreUAPInputHost *)((char *)this + 72), a2);
    *((_BYTE *)this + 96) = 0;
  }
  MPCGestureHandlerManager::s_instance = 0LL;
  MPCGamepadInputHelper::s_instance = 0LL;
  MPCConstantManager::s_instance = 0LL;
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)&MPCManager::s_instance);
  MPCHolographicInputManager::s_instance = 0LL;
  MPC3DStateHelper::s_instance = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v3 = qword_1802442A0;
  *(_QWORD *)&OneCoreUAPInputHost::s_pInputHost = 0LL;
  *(_OWORD *)&ISMBamos_AutoBamos::BamoTraceLogging::s_providers = 0LL;
  qword_1802475B0 = 0LL;
  dword_180244280 = 0;
  qword_1802442A0 = 0LL;
  EventUnregister(v3);
  v4 = RegHandle;
  RegHandle = 0LL;
  dword_180244248 = 0;
  EventUnregister(v4);
  std::unique_ptr<SessionMonitor>::~unique_ptr<SessionMonitor>((_QWORD *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  std::_Optional_destruct_base<InputProviderManager,0>::~_Optional_destruct_base<InputProviderManager,0>(
    (OneCoreUAPInputHost *)((char *)this + 72),
    v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  if ( *((int *)this + 12) >= 0 )
    RoUninitialize();
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
