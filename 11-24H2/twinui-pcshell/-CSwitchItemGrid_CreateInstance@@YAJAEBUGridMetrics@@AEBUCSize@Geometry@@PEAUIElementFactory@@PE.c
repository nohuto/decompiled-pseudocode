/*
 * XREFs of ?CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C7C80
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804BBB40 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804C75A4 (--$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchItemGrid_CreateInstance(
        const struct GridMetrics *a1,
        const struct Geometry::CSize *a2,
        struct IElementFactory *a3,
        struct ISwitchThumbnailFactory *a4,
        struct ISwitchItemController *a5,
        struct IObservableObjectArray *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IElementFactory *v16; // [rsp+60h] [rbp+18h] BYREF
  struct ISwitchThumbnailFactory *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v10 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemGrid,CSwitchItemGrid,GridMetrics const &,Geometry::CSize const &,IElementFactory * &,ISwitchThumbnailFactory * &,ISwitchItemController * &,IObservableObjectArray * &>(
          (CSwitchItemGrid **)&a8,
          a1,
          a2,
          &v16,
          &v17,
          &a5,
          &a6);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 853LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 854LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a8);
  return v12;
}
