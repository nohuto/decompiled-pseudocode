/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801CB858
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1804E8170 (-GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B9E34 (-CopyTo@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1801CB924 (-_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersive.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1801CB9E8 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        CSwitchController *a1,
        __int64 a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        struct IImmersiveMonitor **a5)
{
  struct IImmersiveMonitor **v9; // rsi
  __int64 v10; // rcx
  int MonitorForAppSwitch; // eax
  unsigned int v12; // ebx
  struct IImmersiveMonitor *v13; // rcx
  struct IImmersiveMonitor *v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  LOBYTE(a5) = 0;
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v15);
  if ( (int)CSwitchController::_GetValidDefaultMonitor(v10, a3, a2, v15, &a5) >= 0 && (_BYTE)a5 )
    MonitorForAppSwitch = Microsoft::WRL::ComPtr<IImmersiveMonitor>::CopyTo(v15);
  else
    MonitorForAppSwitch = CSwitchController::_GetMonitorForAppSwitch(a1, v15[0], a4, v9);
  v12 = MonitorForAppSwitch;
  v13 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
