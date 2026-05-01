/*
 * XREFs of ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180238E28
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180108380 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180109510 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18017FF84 (--0CGameEntry@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x1802268D4 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
        _QWORD *a1,
        struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rax
  CGameEntry *v6; // rax
  struct KnownGameList::IGameEntry *v7; // rdx
  CGameEntry *v8; // rbx
  int v9; // edi
  CGameEntry *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CGameEntry::CGameEntry(v4);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<PositionerPriority>::Attach((__int64 *)&v10, (__int64)v6);
  v11 = 0LL;
  v7 = *a2;
  v8 = v10;
  v9 = CGameEntry::RuntimeClassInitialize(v10, v7);
  if ( v9 >= 0 )
  {
    v9 = (**(__int64 (__fastcall ***)(CGameEntry *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_7672fec8_528f_493d_ac6f_80c610e495a4,
           a1);
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return (unsigned int)v9;
}
