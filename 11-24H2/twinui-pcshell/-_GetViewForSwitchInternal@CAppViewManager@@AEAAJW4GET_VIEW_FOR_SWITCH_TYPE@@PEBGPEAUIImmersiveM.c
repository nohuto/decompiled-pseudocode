/*
 * XREFs of ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180141388
 * Callers:
 *     ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1801412C0 (-GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@P.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F7BB0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180141574 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C450C (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 CAppViewManager::_GetViewForSwitchInternal(CAppViewManager *a1, int a2, const unsigned __int16 *a3, ...)
{
  struct IUnknown *v6; // r12
  __int64 v7; // rbx
  struct IImmersiveMonitor *v8; // r8
  __int64 v9; // rcx
  int MostRecentlyUsedViewForApp; // r14d
  __int64 v11; // rsi
  int (__fastcall *v12)(__int64, const unsigned __int16 *, __int64 *); // rdi
  HWND v13; // rdi
  struct IUnknown *v14; // rax
  struct IUnknown *v15; // rcx
  struct IUnknown *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  RTL_SRWLOCK *v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  struct IUnknown *v23; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  va_list va2; // [rsp+A8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, struct IUnknown *);
  v6 = v23;
  v23->lpVtbl = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va1);
  MostRecentlyUsedViewForApp = CAppViewManager::_GetMostRecentlyUsedViewForApp(
                                 a1,
                                 a3,
                                 v8,
                                 (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForApp >= 0 && a2 == 1 )
  {
    CIAMGlobals::AcquireExclusive(v9, &v20);
    v19 = 0LL;
    v11 = *((_QWORD *)a1 + 15);
    v12 = *(int (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v11 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    if ( v12(v11, a3, &v19) >= 0 && *(_BYTE *)(v19 + 32) )
    {
      v13 = *(HWND *)(v19 + 24);
      v17 = 0LL;
      LOBYTE(v21) = 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      if ( (int)CAppViewManager::_GetGlomForWindow(a1, v13, (struct IImmersiveApplicationInternal **)&v17, (bool *)va) >= 0 )
      {
        if ( (_BYTE)v21 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v18, &v17);
          v7 = v18;
        }
        else
        {
          if ( !SHIsSameObject(v23, v17) )
            (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                               + 96LL))(
              *((_QWORD *)a1 + 15),
              v13,
              v17,
              v23,
              0LL);
          ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v23->lpVtbl[4].Release)(v23, v13, 2LL);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
    if ( v7 )
      goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v18, (struct IUnknown **)va1);
  v7 = v18;
  if ( MostRecentlyUsedViewForApp >= 0 )
  {
LABEL_14:
    v14 = v23;
    v15 = 0LL;
    v23 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v14;
  }
  else
  {
    v15 = v23;
  }
  if ( v15 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)MostRecentlyUsedViewForApp;
}
