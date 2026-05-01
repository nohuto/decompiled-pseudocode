/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1804E1DBC
 * Callers:
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1804E21A0 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0MultitaskingViewDragVisual@@QEAA@XZ @ 0x1804E1EAC (--0MultitaskingViewDragVisual@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1804E22BC (-RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMulti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewDragVisual,MultitaskingViewDragVisual,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,Geometry::CSize const &,double &>(
        MultitaskingViewDragVisual **a1,
        struct ISwitchThumbnailFactory **a2,
        struct IMultitaskingViewElement **a3,
        struct IMultitaskingViewElement **a4,
        struct Geometry::CSize *a5,
        double *a6)
{
  void *v10; // rax
  int v11; // edi
  MultitaskingViewDragVisual *v12; // rbx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  MultitaskingViewDragVisual *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  v15 = (MultitaskingViewDragVisual *)v10;
  if ( v10 )
  {
    v12 = MultitaskingViewDragVisual::MultitaskingViewDragVisual((MultitaskingViewDragVisual *)v10);
    v15 = v12;
    v14 = 0LL;
    v11 = MultitaskingViewDragVisual::RuntimeClassInitialize(v12, *a2, *a3, *a4, a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(MultitaskingViewDragVisual *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      v11 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v11;
}
