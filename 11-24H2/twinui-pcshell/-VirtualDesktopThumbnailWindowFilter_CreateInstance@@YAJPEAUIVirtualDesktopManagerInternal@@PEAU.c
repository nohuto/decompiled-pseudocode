/*
 * XREFs of ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AE470
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3E9C (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801FDC84 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNotifi.c)
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804AD914 (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x1804ADFD8 (-InternalRelease@-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopThumbnailWindowFilter_CreateInstance(
        struct IVirtualDesktopManagerInternal *a1,
        struct ITabletModeController *a2,
        struct IVirtualDesktopNotificationService *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int CanCastTo; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // r9
  _DWORD *v12; // rdx
  __int64 *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopManagerInternal *v16; // [rsp+40h] [rbp+20h] BYREF
  struct ITabletModeController *v17; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopNotificationService *v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v19; // [rsp+58h] [rbp+38h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  v5 = a5;
  *a5 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease((volatile int **)&v19);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopThumbnailWindowFilter,VirtualDesktopThumbnailWindowFilter,IVirtualDesktopManagerInternal * &,ITabletModeController * &,IVirtualDesktopNotificationService * &>(
         &v19,
         (__int64 *)&v16,
         (__int64 *)&v17,
         (__int64 *)&v18);
  CanCastTo = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 139LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_06ca7860_e1ab_427a_a38d_e9d32e6e3a97, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v19;
    *v5 = v19;
    (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v11) )
    {
      *v5 = v19;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                    (__int64)(v19 + 1),
                    v12,
                    v5);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 140LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease((volatile int **)&v19);
  return (unsigned int)CanCastTo;
}
