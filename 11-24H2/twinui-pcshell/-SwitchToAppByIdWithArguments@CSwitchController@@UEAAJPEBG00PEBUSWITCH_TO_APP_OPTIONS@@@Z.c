/*
 * XREFs of ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1800C8504 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801CB858 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1801CB858.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x18022088C (McTemplateU0zzz_EventWriteTransfer.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18022136C (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804E8638 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1804E8790 (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180679188 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchController::SwitchToAppByIdWithArguments(
        CSwitchController *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const struct SWITCH_TO_APP_OPTIONS *a5)
{
  const WCHAR *v6; // rsi
  const WCHAR *v9; // r9
  int v10; // ecx
  int MonitorForAppSwitchWithPreference; // edi
  __int64 v12; // rdi
  struct IImmersiveApplication **v13; // r9
  CSwitchController *v14; // rcx
  volatile signed __int32 *v16; // [rsp+30h] [rbp-40h]
  int v17; // [rsp+38h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  struct HWND__ v19[4]; // [rsp+50h] [rbp-20h] BYREF
  char v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+68h] [rbp-8h] BYREF

  v6 = a3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v9) = (_DWORD)a3;
    if ( !a3 )
      v9 = &pvData;
    McTemplateU0zzz_EventWriteTransfer((_DWORD)this, (_DWORD)a2, (_DWORD)a2, (_DWORD)v9, (__int64)a4);
  }
  v16 = (volatile signed __int32 *)((char *)this - 88);
  v10 = 1;
  MonitorForAppSwitchWithPreference = 0;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4) > 1 )
  {
    _InterlockedAdd(v16 + 27, 1u);
    MonitorForAppSwitchWithPreference = -2147019873;
  }
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v18 = 0LL;
    *(_OWORD *)&v19[0].unused = 0LL;
    v20 = 0;
    v21 = 0LL;
    v17 = *((_DWORD *)a5 + 6);
    v12 = *((_QWORD *)a5 + 5);
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)a5 + 5));
      v21 = v12;
    }
    if ( *((_QWORD *)a5 + 4) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19[2].unused);
      CallerIdentity::FindApplication(*((CallerIdentity **)this - 9), *((struct IUnknown **)a5 + 4), &v19[2], v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          (char *)this - 88,
                                          *(_QWORD *)a5,
                                          *((unsigned int *)a5 + 2),
                                          a2,
                                          &v18);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = CSwitchController::_PrepareAppForActivation(
                                            (char *)this - 88,
                                            a2,
                                            v6,
                                            a4,
                                            *((_DWORD *)a5 + 3),
                                            &v17);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                              (IUnknown **)this - 11,
                                              (struct CSwitchController::ActivationData *)&v17);
        if ( MonitorForAppSwitchWithPreference >= 0 )
          MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                                v14,
                                                (struct CSwitchController::ActivationData *)&v17);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19[2].unused);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19[0].unused);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    if ( !v6 )
      v6 = &pvData;
    McTemplateU0zzzq_EventWriteTransfer(
      v10,
      (_DWORD)a2,
      (_DWORD)a2,
      (_DWORD)v6,
      (__int64)a4,
      MonitorForAppSwitchWithPreference);
  }
  if ( this != (CSwitchController *)88 && _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF) == 1 )
    *((_DWORD *)v16 + 27) = 0;
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
