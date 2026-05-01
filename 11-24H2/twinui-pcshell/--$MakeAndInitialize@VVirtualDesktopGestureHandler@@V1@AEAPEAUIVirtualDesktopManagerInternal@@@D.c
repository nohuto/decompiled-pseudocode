/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1801EDC54
 * Callers:
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180095764 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGestureHandler@@QEAAJPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1801EDD08 (-RuntimeClassInitialize@VirtualDesktopGestureHandler@@QEAAJPEAUIVirtualDesktopManagerInternal@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@UITouchSwipe@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EDD90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture.c)
 *     ??0VirtualDesktopGestureHandler@@QEAA@XZ @ 0x1802969CC (--0VirtualDesktopGestureHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGestureHandler,VirtualDesktopGestureHandler,IVirtualDesktopManagerInternal * &>(
        VirtualDesktopGestureHandler **a1,
        struct IVirtualDesktopManagerInternal **a2)
{
  void *v4; // rax
  VirtualDesktopGestureHandler *v6; // rbx
  volatile int *v7; // rdx
  int v8; // edi
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopGestureHandler *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = VirtualDesktopGestureHandler::VirtualDesktopGestureHandler((VirtualDesktopGestureHandler *)v4);
    v10 = v6;
    v9 = 0LL;
    v8 = VirtualDesktopGestureHandler::RuntimeClassInitialize(v6, *a2);
    if ( v8 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopGestureHandler *)((char *)v6 + 28), v7);
      *a1 = v6;
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,ITouchSwipe,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v6);
      return 0;
    }
    else if ( v6 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,ITouchSwipe,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v6);
    }
    return (unsigned int)v8;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
    return 2147942414LL;
  }
}
