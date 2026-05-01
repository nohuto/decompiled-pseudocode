/*
 * XREFs of ??$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@@012@@Z @ 0x1802B5BB8
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801269E4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F3280 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180485480 (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::ViewRectProvider,KeyboardHosting::ViewRectProvider,>(
        __int64 *a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(a1);
  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x310uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v4 = KeyboardHosting::ViewRectProvider::ViewRectProvider((KeyboardHosting::ViewRectProvider *)v3);
    v9 = v4;
    v6 = v4;
    v8 = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 12), v5);
    *a1 = v6;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v9);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
