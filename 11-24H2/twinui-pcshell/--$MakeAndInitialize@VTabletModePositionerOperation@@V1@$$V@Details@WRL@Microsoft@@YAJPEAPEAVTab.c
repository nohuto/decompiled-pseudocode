/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerOperation@@@Z @ 0x180527C20
 * Callers:
 *     ?TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180529190 (-TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800467B0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x180527CD8 (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerOperation,TabletModePositionerOperation,>(
        TabletModePositionerOperation **a1)
{
  void *v2; // rax
  int inited; // edi
  TabletModePositionerOperation *v4; // rbx
  TabletModePositionerOperation *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v6 = (TabletModePositionerOperation *)v2;
  if ( v2 )
  {
    v4 = TabletModePositionerOperation::TabletModePositionerOperation((TabletModePositionerOperation *)v2);
    v6 = v4;
    v7 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((TabletModePositionerOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(TabletModePositionerOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
      inited = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    }
  }
  else
  {
    inited = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)inited;
}
