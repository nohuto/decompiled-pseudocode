/*
 * XREFs of ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804CA3C8
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804BBB40 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CFD88 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804CA094 (--$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScrollViewerHost_CreateInstance(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        CScrollViewerHost *a9)
{
  CScrollViewerHost *v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = a1;
  v12 = a9;
  *(_QWORD *)a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a9);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CScrollViewerHost,CScrollViewerHost,enum ScrollViewerHostFlags &,ScrollViewerHostMetrics const &,_MARGINS const &,RelativeMargins const &,unsigned int &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
          &a9,
          &v18,
          a2,
          a3,
          a4,
          &a5,
          &a6,
          &a7);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 311LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_6;
  }
  v13 = (**(__int64 (__fastcall ***)(CScrollViewerHost *, GUID *, CScrollViewerHost *))a9)(
          a9,
          &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
          v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 312LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a9);
  return v14;
}
