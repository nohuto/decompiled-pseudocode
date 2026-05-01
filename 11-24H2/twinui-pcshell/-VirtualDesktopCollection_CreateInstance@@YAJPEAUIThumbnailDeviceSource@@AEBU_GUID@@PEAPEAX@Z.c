/*
 * XREFs of ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x180230768
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180492BA0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800602D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800FF4CC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopC.c)
 *     ??$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopCollection@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x1802C22E8 (--$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@M.c)
 *     ??1?$com_ptr_t@VVirtualDesktopCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CEAEC (--1-$com_ptr_t@VVirtualDesktopCollection@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopCollection_CreateInstance(
        struct IThumbnailDeviceSource *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IThumbnailDeviceSource *v9; // [rsp+30h] [rbp+8h] BYREF
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollection,VirtualDesktopCollection,IThumbnailDeviceSource * &>(
         &v10,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v10 )
    {
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>>(
             v10,
             (__int64)&GUID_d6a0b580_90e9_5a9d_b7f0_671d8b195489,
             a3);
      v5 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v6);
    }
    else
    {
      *a3 = 0LL;
      v5 = 0;
    }
    wil::com_ptr_t<VirtualDesktopCollection,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopCollection,wil::err_returncode_policy>(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v4);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release((__int64)v10);
  }
  return v5;
}
