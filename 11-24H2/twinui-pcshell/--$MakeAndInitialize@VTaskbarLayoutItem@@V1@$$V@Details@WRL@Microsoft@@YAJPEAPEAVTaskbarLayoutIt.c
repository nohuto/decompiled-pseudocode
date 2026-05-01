/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutItem@@@Z @ 0x1802C5A4C
 * Callers:
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C5560 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TaskbarLayoutItem@@QEAA@XZ @ 0x180322714 (--0TaskbarLayoutItem@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutItem,TaskbarLayoutItem,>(
        TaskbarLayoutItem **a1)
{
  void *v2; // rax
  TaskbarLayoutItem *v4; // rax
  TaskbarLayoutItem *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  TaskbarLayoutItem *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = TaskbarLayoutItem::TaskbarLayoutItem((TaskbarLayoutItem *)v2);
  v5 = v4;
  v7 = v4;
  v6 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(TaskbarLayoutItem *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return 0LL;
}
