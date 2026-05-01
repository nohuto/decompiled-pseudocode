/*
 * XREFs of ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18009B754
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18009A4C0 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1801E4F90 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1801FE660 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802E95B0 (-OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x1802E9B10 (-OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x18009BC30 (--$GetAppPosition@VCImmersiveAppFinderByHwnd@@@-$CActivationBasedCollection@V-$ComPtr@UIImmersiv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetFrameByHwnd(
        CApplicationManager *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rcx
  HWND v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF

  v6 = -2147467261;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 76) )
  {
    v13 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v11 = a2;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v6 = ((__int64 (__fastcall *)(char *, HWND *, __int64, __int64 *))CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>)(
           (char *)this + 624,
           &v11,
           v7,
           &v14);
    if ( v6 >= 0 )
    {
      v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v14);
      v6 = (**v8)(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v13);
    }
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameProxy **))(*(_QWORD *)v13 + 496LL))(v13, a3);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return (unsigned int)v6;
}
