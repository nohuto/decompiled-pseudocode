/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1802BDA00
 * Callers:
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FBCB8 (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E1988 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x1802AECA4 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1804A1F10 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
        CMultitaskingViewHotKeyHandler **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IImmersiveMonitorManager **a3,
        struct IMultitaskingViewTaskScheduler **a4,
        struct IApplicationViewCollection **a5)
{
  CMultitaskingViewHotKeyHandler *v9; // rax
  CMultitaskingViewHotKeyHandler *v11; // rbx
  volatile int *v12; // rdx
  int v13; // edi
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  CMultitaskingViewHotKeyHandler *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CMultitaskingViewHotKeyHandler *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v9;
  if ( !v9 )
    return 2147942414LL;
  v11 = CMultitaskingViewHotKeyHandler::CMultitaskingViewHotKeyHandler(v9);
  v15 = v11;
  v14 = 0LL;
  v13 = CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
  if ( v13 >= 0 )
  {
    if ( v11 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CMultitaskingViewHotKeyHandler *)((char *)v11 + 20), v12);
    *a1 = v11;
    v13 = 0;
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v13;
}
