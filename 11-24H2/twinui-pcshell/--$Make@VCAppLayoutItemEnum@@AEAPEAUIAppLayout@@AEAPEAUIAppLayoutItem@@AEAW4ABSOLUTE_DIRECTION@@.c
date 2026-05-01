/*
 * XREFs of ??$Make@VCAppLayoutItemEnum@@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutItemEnum@@@12@AEAPEAUIAppLayout@@AEAPEAUIAppLayoutItem@@AEAW4ABSOLUTE_DIRECTION@@AEAW4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x1806C336C
 * Callers:
 *     ?GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@PEAPEAUIAppLayoutItemEnum@@@Z @ 0x1806C3EE0 (-GetItemEnumEx@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAG.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x1806C3414 (--0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CAppLayoutItemEnum,IAppLayout * &,IAppLayoutItem * &,enum ABSOLUTE_DIRECTION &,enum APP_LAYOUT_ENUM_FLAGS &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  __int64 v9; // rdi
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v9 = CAppLayoutItemEnum::CAppLayoutItemEnum(v11, *a2, *a3, *a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    v11 = 0LL;
    *a1 = v9;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return a1;
}
