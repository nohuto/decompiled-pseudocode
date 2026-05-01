/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x1804C0484
 * Callers:
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C0A0C (-VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItem@@QEAA@XZ @ 0x1804C053C (--0VirtualDesktopItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804C08AC (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
        VirtualDesktopItem **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v5; // edi
  void *v7; // rax
  VirtualDesktopItem *v8; // rax
  __int64 v9; // rdx
  VirtualDesktopItem *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  void *v14; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopItem *v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  *a1 = 0LL;
  v7 = operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v7;
  if ( v7 )
  {
    v8 = VirtualDesktopItem::VirtualDesktopItem((VirtualDesktopItem *)v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v15 = v8;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v8 + 11, v9);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v10 + 12, v11);
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItem *)((char *)v10 + 84), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(&v15);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return v5;
}
