/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180208DCC
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180097E4C (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801FC2B8 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1802B3C64 (-RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopForegroundPolicy@@QEAA@XZ @ 0x18054FF84 (--0CVirtualDesktopForegroundPolicy@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
        CVirtualDesktopForegroundPolicy **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopDefaultForegroundHandler **a4)
{
  void *v8; // rax
  CVirtualDesktopForegroundPolicy *v10; // rax
  struct IVirtualDesktopDefaultForegroundHandler *v11; // r9
  struct IVirtualDesktopVisibilityPolicy *v12; // r8
  CVirtualDesktopForegroundPolicy *v13; // rbx
  struct IVirtualDesktopCollection *v14; // rdx
  volatile int *v15; // rdx
  int v16; // edi
  CVirtualDesktopForegroundPolicy *v17; // [rsp+20h] [rbp-28h] BYREF
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = CVirtualDesktopForegroundPolicy::CVirtualDesktopForegroundPolicy((CVirtualDesktopForegroundPolicy *)v8);
  v11 = *a4;
  v12 = *a3;
  v13 = v10;
  v14 = *a2;
  v18 = 0LL;
  v17 = v10;
  v16 = CVirtualDesktopForegroundPolicy::RuntimeClassInitialize(v10, v14, v12, v11);
  if ( v16 >= 0 )
  {
    if ( v13 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopForegroundPolicy *)((char *)v13 + 12), v15);
    *a1 = v13;
    v16 = 0;
  }
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
  return (unsigned int)v16;
}
