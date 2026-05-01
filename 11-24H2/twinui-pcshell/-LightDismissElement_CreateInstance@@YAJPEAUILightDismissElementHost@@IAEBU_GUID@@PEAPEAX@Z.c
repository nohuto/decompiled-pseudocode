/*
 * XREFs of ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x1804DBA18
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804CC5E4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1804DB758 (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissElement_CreateInstance(
        struct ILightDismissElementHost *a1,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ILightDismissElementHost *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+50h] [rbp+18h] BYREF

  v11 = a1;
  v9[0] = 13040;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<LightDismissElement,LightDismissElement,ILightDismissElementHost * &,unsigned int &>(
         (__int64 *)&v12,
         (__int64 *)&v11,
         v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 80LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\lightdismisselement.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (**v12)(v12, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 81LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return v6;
}
