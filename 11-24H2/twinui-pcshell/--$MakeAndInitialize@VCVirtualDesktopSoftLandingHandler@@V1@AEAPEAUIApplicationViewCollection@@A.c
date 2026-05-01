/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x1802BD0E4
 * Callers:
 *     ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18023A408 (-CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtu.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopSoftLandingHandler@@QEAA@XZ @ 0x1805685F0 (--0CVirtualDesktopSoftLandingHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x1805687E0 (-RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSoftLandingHandler,CVirtualDesktopSoftLandingHandler,IApplicationViewCollection * &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopRegistryHelpers * &>(
        CVirtualDesktopSoftLandingHandler **a1,
        struct IApplicationViewCollection **a2,
        struct IVirtualDesktopNotificationServicePrivate **a3,
        struct IVirtualDesktopRegistryHelpers **a4)
{
  void *v8; // rax
  CVirtualDesktopSoftLandingHandler *v10; // rbx
  int v11; // edi
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler((CVirtualDesktopSoftLandingHandler *)v8);
  v12 = 0LL;
  v11 = CVirtualDesktopSoftLandingHandler::RuntimeClassInitialize(v10, *a2, *a3, *a4);
  if ( v11 >= 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(CVirtualDesktopSoftLandingHandler *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    if ( v10 )
      (*(void (__fastcall **)(CVirtualDesktopSoftLandingHandler *))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = 0;
  }
  else if ( v10 )
  {
    (*(void (__fastcall **)(CVirtualDesktopSoftLandingHandler *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v11;
}
