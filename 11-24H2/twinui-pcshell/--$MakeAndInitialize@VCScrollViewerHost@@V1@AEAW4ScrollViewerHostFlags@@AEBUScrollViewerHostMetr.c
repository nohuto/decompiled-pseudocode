/*
 * XREFs of ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804CA094
 * Callers:
 *     ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804CA3C8 (-CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CScrollViewerHost@@QEAA@XZ @ 0x1804CA1A4 (--0CScrollViewerHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CA654 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollViewerHost,CScrollViewerHost,enum ScrollViewerHostFlags &,ScrollViewerHostMetrics const &,_MARGINS const &,RelativeMargins const &,unsigned int &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
        CScrollViewerHost **a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  void *v12; // rax
  int v13; // edi
  CScrollViewerHost *v14; // rbx
  void *v16; // [rsp+40h] [rbp-28h] BYREF
  CScrollViewerHost *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = operator new(0x1E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v12;
  v17 = (CScrollViewerHost *)v12;
  if ( v12 )
  {
    v14 = CScrollViewerHost::CScrollViewerHost((CScrollViewerHost *)v12);
    v17 = v14;
    v13 = CScrollViewerHost::RuntimeClassInitialize(v14, *a2, a3, a4, a5, *a6, *a7, *a8, 0LL);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CScrollViewerHost *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v13 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    }
  }
  else
  {
    v13 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
  return (unsigned int)v13;
}
