/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180143C9C
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180143BF8 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x180143D58 (--0MultitaskingViewGestureHandler@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C5630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_1801C5630.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299190 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BD598 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEBAXXZ @ 0x18049EE6C (-InternalAddRef@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
        MultitaskingViewGestureHandler **a1,
        struct IMultitaskingViewTaskScheduler **a2,
        struct IMultitaskingViewVisibilityService **a3)
{
  void *v6; // rax
  MultitaskingViewGestureHandler *v8; // rbx
  int v9; // edi
  MultitaskingViewGestureHandler *v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  v10 = (MultitaskingViewGestureHandler *)v6;
  if ( !v6 )
    return 2147942414LL;
  v8 = MultitaskingViewGestureHandler::MultitaskingViewGestureHandler((MultitaskingViewGestureHandler *)v6);
  v10 = v8;
  v11 = 0LL;
  v9 = MultitaskingViewGestureHandler::RuntimeClassInitialize(v8, *a2, *a3);
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalAddRef(&v10);
    *a1 = v8;
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v10);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
    return 0LL;
  }
  else
  {
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::Release(v8);
    return (unsigned int)v9;
  }
}
