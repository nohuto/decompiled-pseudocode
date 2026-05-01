/*
 * XREFs of ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18029FE74
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DF8F0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIA_ea_1800DF8F0.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1801208DC (-InternalRelease@-$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180120910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_180120910.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18029FF58 (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 */

__int64 __fastcall CVirtualDesktopApplicationViewEventListener_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopSwitchAnimator *a2,
        struct IVirtualDesktopForegroundPolicy *a3,
        struct IVirtualDesktopWindowMoveManager *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5,
        struct IVirtualDesktopLock *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktopSwitchAnimator *v16; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktopForegroundPolicy *v17; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopWindowMoveManager *v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease((__int64 *)&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopApplicationViewEventListener,CVirtualDesktopApplicationViewEventListener,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopLock * &>(
         (unsigned int)&a8,
         (unsigned int)&v15,
         (unsigned int)&v16,
         (unsigned int)&v17,
         (__int64)&v18,
         (__int64)&a5,
         (__int64)&a6);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>>(
            (__int64)a8,
            (int *)&GUID_727f9e97_76ee_497b_a942_b6371328485c,
            v8);
    v10 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease((__int64 *)&a8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v9);
    v11 = (volatile signed __int32 *)a8;
    if ( a8 )
    {
      a8 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(v11);
    }
  }
  return v10;
}
