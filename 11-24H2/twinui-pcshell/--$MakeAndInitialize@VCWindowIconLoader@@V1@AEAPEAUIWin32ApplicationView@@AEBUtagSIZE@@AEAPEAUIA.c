/*
 * XREFs of ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x18010A20C
 * Callers:
 *     ?LoadWindowIcon@@YAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x18010A178 (-LoadWindowIcon@@YAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B714 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x18010A300 (-RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CWindowIconLoader,CWindowIconLoader,IWin32ApplicationView * &,tagSIZE const &,IApplicationViewIconLoaderNotifications * &,IIconLoadingFunctions * &>(
        CWindowIconLoader **a1,
        struct IWin32ApplicationView **a2,
        const struct tagSIZE *a3,
        struct IApplicationViewIconLoaderNotifications **a4,
        struct IIconLoadingFunctions **a5)
{
  CWindowIconLoader *v9; // rax
  CWindowIconLoader *v10; // rbx
  int v11; // edi
  CWindowIconLoader *v13; // [rsp+30h] [rbp-28h] BYREF
  CWindowIconLoader *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CWindowIconLoader *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v14 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v9);
    *(_QWORD *)v10 = &CWindowIconLoader::`vftable';
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    v13 = v10;
    v14 = 0LL;
    v11 = CWindowIconLoader::RuntimeClassInitialize(v10, *a2, a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(CWindowIconLoader *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      (*(void (__fastcall **)(CWindowIconLoader *))(*(_QWORD *)v10 + 16LL))(v10);
      return 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v14);
  return (unsigned int)v11;
}
