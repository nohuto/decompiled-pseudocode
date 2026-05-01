/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameService@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18010002C
 * Callers:
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FFF1C (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameService@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FFF98 (-InternalRelease@-$ComPtr@VCApplicationFrameService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CApplicationFrameService@@QEAA@XZ @ 0x18029AD78 (--0CApplicationFrameService@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameService,CApplicationFrameService,IImmersiveApplicationManagerInternal * &>(
        CApplicationFrameService **a1,
        __int64 *a2)
{
  void *v4; // rax
  CApplicationFrameService *v6; // rax
  __int64 v7; // rdx
  CApplicationFrameService *v8; // rbx
  volatile int *v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  CApplicationFrameService *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CApplicationFrameService::CApplicationFrameService((CApplicationFrameService *)v4);
  v7 = *a2;
  v8 = v6;
  v10 = 0LL;
  v11 = v6;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 21, v7);
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CApplicationFrameService *)((char *)v8 + 92), v9);
  *a1 = v8;
  Microsoft::WRL::ComPtr<CApplicationFrameService>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return 0LL;
}
