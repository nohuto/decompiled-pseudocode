/*
 * XREFs of ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x180534FE8
 * Callers:
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180535380 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppResizeAcc@@QEAA@XZ @ 0x180535094 (--0AppResizeAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x1805359F0 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeAcc,AppResizeAcc,>(AppResizeAcc **a1)
{
  void *v2; // rax
  int v3; // ebx
  AppResizeAcc *v4; // rdi
  AppResizeAcc *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v6 = (AppResizeAcc *)v2;
  if ( v2 )
  {
    v4 = AppResizeAcc::AppResizeAcc((AppResizeAcc *)v2);
    v6 = v4;
    v7 = 0LL;
    v3 = AppResizeAcc::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
      v3 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)v3;
}
