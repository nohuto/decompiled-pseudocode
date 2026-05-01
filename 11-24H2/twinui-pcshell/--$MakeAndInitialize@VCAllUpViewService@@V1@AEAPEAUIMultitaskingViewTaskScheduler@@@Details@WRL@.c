/*
 * XREFs of ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1802A86C4
 * Callers:
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A8604 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18021B238 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CAllUpViewService@@QEAA@XZ @ 0x1802B2B9C (--0CAllUpViewService@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAllUpViewService,CAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        CAllUpViewService **a1,
        __int64 *a2)
{
  void *v4; // rax
  CAllUpViewService *v6; // rax
  __int64 v7; // rdx
  CAllUpViewService *v8; // rbx
  volatile int *v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  CAllUpViewService *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CAllUpViewService::CAllUpViewService((CAllUpViewService *)v4);
  v7 = *a2;
  v8 = v6;
  v10 = 0LL;
  v11 = v6;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 7, v7);
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CAllUpViewService *)((char *)v8 + 52), v9);
  *a1 = v8;
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return 0LL;
}
