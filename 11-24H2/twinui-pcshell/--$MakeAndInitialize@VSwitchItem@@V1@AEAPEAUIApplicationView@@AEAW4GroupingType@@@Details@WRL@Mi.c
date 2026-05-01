/*
 * XREFs of ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x1804BEF68
 * Callers:
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BF688 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitchItem@@QEAA@XZ @ 0x1804BF020 (--0SwitchItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1804BF45C (-InternalRelease@-$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x1804BF590 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItem,SwitchItem,IApplicationView * &,enum GroupingType &>(
        SwitchItem **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  void *v6; // rax
  int v7; // edi
  SwitchItem *v8; // rbx
  volatile int *v9; // rdx
  SwitchItem *v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  v11 = (SwitchItem *)v6;
  if ( v6 )
  {
    v8 = SwitchItem::SwitchItem((SwitchItem *)v6);
    v11 = v8;
    v12 = 0LL;
    v7 = SwitchItem::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((SwitchItem *)((char *)v8 + 92), v9);
      *a1 = v8;
      Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(&v11);
      v7 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(&v11);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v7;
}
