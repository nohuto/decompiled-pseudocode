/*
 * XREFs of ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B184C
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3E9C (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804B1404 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$_ea_1804B1404.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x1804B1544 (--$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMa.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B1B78 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPPIAllUpViewHost_CreateInstance(
        struct IMultitaskingData *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct IMultitaskingViewVisibilityServiceInternal *a5,
        struct ITabletModeViewManager *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IMultitaskingData *v14; // [rsp+60h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v15; // [rsp+68h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v16; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewHost,CPPIAllUpViewHost,IMultitaskingData * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,IMultitaskingViewVisibilityServiceInternal * &,ITabletModeViewManager * &>(
         &a8,
         &v14,
         &v15,
         &v16,
         &v17,
         &a5,
         &a6);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 204LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_6;
  }
  v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IPPIAllUpViewHost>,IExternalDragHost>>(
         (__int64)a8,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 206LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(&a8);
  return v10;
}
