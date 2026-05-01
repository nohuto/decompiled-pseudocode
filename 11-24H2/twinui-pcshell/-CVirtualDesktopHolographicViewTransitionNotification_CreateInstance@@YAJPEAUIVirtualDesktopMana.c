/*
 * XREFs of ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18009900C
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802686C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180098F08 (--$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDe.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800990B0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicViewTransitionNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicViewTransitionNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180215040 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicVie.c)
 */

__int64 __fastcall CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v10; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopLock *v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         &v12,
         (__int64 *)&v10,
         (__int64 *)&v11);
  if ( v5 < 0 )
  {
    v6 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopholographicviewtransitionnotification.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_4;
  }
  v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHolographicViewTransitionNotification,Microsoft::WRL::FtmBase>>(
         v12,
         &GUID_76bb2cfb_c246_41ec_b9c3_671e5347cf51,
         a4);
  if ( v5 < 0 )
  {
    v6 = 60LL;
    goto LABEL_3;
  }
LABEL_4:
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(v7);
  }
  return (unsigned int)v5;
}
