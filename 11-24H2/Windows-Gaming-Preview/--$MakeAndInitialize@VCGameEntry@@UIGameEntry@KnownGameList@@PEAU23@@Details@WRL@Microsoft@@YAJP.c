/*
 * XREFs of ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003CFA0
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DED4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EA60 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18003D1A4 (--0CGameEntry@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x1800414DC (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
        _QWORD *a1,
        struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rax
  CGameEntry *v6; // rdi
  int v7; // ebx

  *a1 = 0LL;
  v4 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v6 = CGameEntry::CGameEntry(v4);
  v7 = CGameEntry::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(CGameEntry *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_7672fec8_528f_493d_ac6f_80c610e495a4,
           a1);
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v7;
}
