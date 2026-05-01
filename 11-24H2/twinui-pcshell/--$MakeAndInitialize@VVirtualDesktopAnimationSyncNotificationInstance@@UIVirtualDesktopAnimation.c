/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x180559A1C
 * Callers:
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x180559E00 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18003B754 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x180559FA0 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAnimationSyncNotificationInstance,IVirtualDesktopAnimationNotificationInstance,IVirtualDesktop * &,IVirtualDesktop * &,IObjectArray *,unsigned long &>(
        VirtualDesktopAnimationSyncNotificationInstance **a1,
        struct IVirtualDesktop **a2,
        struct IVirtualDesktop **a3,
        struct IObjectArray **a4,
        unsigned int *a5)
{
  VirtualDesktopAnimationSyncNotificationInstance *v9; // rax
  VirtualDesktopAnimationSyncNotificationInstance *v10; // rbx
  int v11; // edi
  volatile int *v12; // rdx
  const struct _GUID *v13; // rcx
  VirtualDesktopAnimationSyncNotificationInstance *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopAnimationSyncNotificationInstance *)operator new(
                                                            0x20uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v15 = v9;
  if ( v9 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v9);
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopAnimationNotificationInstance>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &VirtualDesktopAnimationSyncNotificationInstance::`vftable';
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    v15 = 0LL;
    v11 = VirtualDesktopAnimationSyncNotificationInstance::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_54190683_3626_41b9_a839_5869f360a946, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v10;
        (*(void (__fastcall **)(VirtualDesktopAnimationSyncNotificationInstance *))(*(_QWORD *)v10 + 8LL))(v10);
        v11 = 0;
      }
      else if ( InlineIsEqualGUID(v13, v13) )
      {
        *a1 = v10;
        v11 = 0;
        (*(void (__fastcall **)(VirtualDesktopAnimationSyncNotificationInstance *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      else
      {
        v11 = -2147467262;
      }
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      (__int64)v10,
      v12);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v15);
  return (unsigned int)v11;
}
