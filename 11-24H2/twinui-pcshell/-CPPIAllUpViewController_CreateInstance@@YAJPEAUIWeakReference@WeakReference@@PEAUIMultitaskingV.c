/*
 * XREFs of ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BED2C
 * Callers:
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1804B1C50 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewControllerBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804B85AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingVi.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B8A84 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x1804BEB84 (--$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIM.c)
 */

__int64 __fastcall CPPIAllUpViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct ITabletModeViewManager *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWeakReference *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease((__int64 *)&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewController,CPPIAllUpViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,ITabletModeViewManager * &>(
         (__int64 **)&a7,
         (__int64 *)&v13,
         (__int64 *)&v14,
         (__int64 *)&v15,
         (__int64 *)&v16,
         (__int64 *)&a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 63LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewControllerBase>>(
         (__int64)a7,
         &GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9,
         v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 64LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease((__int64 *)&a7);
  return v9;
}
