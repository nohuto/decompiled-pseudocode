/*
 * XREFs of ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18021FCC8
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180075174 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180497430 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1800931BC (--$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014AFE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktop2@5678@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180190140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@M.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x18021FD9C (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop_CreateInstance(
        struct IVirtualDesktop *a1,
        struct IThumbnailDeviceSource *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        const struct _GUID *a5,
        void **a6)
{
  void **v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void **v9; // rcx
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktop *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IThumbnailDeviceSource *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopManagerInternal *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopNotificationService *v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v6 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktop,VirtualDesktop,IVirtualDesktop * &,IThumbnailDeviceSource * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
         (volatile signed __int64 **)&a6,
         &v13,
         &v14,
         &v15,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::QueryInterface(
                  (__int64)a6,
                  &GUID_c9f125fc_77cc_5ce0_87f4_f94b7a67d80b,
                  v6);
    v8 = Interface;
    if ( Interface < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)Interface);
    Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&a6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v7);
    v9 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop2,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release((__int64)v9);
    }
  }
  return v8;
}
