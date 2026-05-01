/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804C75A4
 * Callers:
 *     ?CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C7C80 (-CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSwitchItemGrid@@QEAA@XZ @ 0x1804C77F4 (--0CSwitchItemGrid@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x1804C91D4 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemGrid,CSwitchItemGrid,GridMetrics const &,Geometry::CSize const &,IElementFactory * &,ISwitchThumbnailFactory * &,ISwitchItemController * &,IObservableObjectArray * &>(
        CSwitchItemGrid **a1,
        const struct GridMetrics *a2,
        const struct Geometry::CSize *a3,
        struct IElementFactory **a4,
        struct ISwitchThumbnailFactory **a5,
        struct ISwitchItemController **a6,
        struct IObservableObjectArray **a7)
{
  void *v11; // rax
  int v12; // edi
  CSwitchItemGrid *v13; // rbx
  void *v15; // [rsp+40h] [rbp-28h] BYREF
  CSwitchItemGrid *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x3B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v11;
  v16 = (CSwitchItemGrid *)v11;
  if ( v11 )
  {
    v13 = CSwitchItemGrid::CSwitchItemGrid((CSwitchItemGrid *)v11);
    v16 = v13;
    v15 = 0LL;
    v12 = CSwitchItemGrid::RuntimeClassInitialize(v13, a2, a3, *a4, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      v12 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return (unsigned int)v12;
}
