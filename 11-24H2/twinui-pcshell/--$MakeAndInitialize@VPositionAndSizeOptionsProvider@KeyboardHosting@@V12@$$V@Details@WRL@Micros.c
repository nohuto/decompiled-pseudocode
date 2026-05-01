/*
 * XREFs of ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18021B194
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801269E4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F3280 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1804853D8 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = (__int64)v2;
  if ( !v2 )
    return 2147942414LL;
  v9 = v2;
  v4 = KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider((KeyboardHosting::PositionAndSizeOptionsProvider *)v2);
  v6 = v4;
  v8 = v4;
  v7 = 0LL;
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 12), v5);
  *a1 = v6;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v8);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return 0LL;
}
