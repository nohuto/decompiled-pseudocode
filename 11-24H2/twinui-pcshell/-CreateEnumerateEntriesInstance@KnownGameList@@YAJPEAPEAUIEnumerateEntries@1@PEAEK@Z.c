/*
 * XREFs of ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1801093A4
 * Callers:
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x180107164 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180108380 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180109510 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CEnumerateEntries@@QEAA@XZ @ 0x1801094B0 (--0CEnumerateEntries@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KnownGameList::CreateEnumerateEntriesInstance(
        KnownGameList *this,
        struct KnownGameList::IEnumerateEntries **a2,
        unsigned __int8 *a3)
{
  int v3; // ebp
  void *v6; // rax
  CEnumerateEntries *v7; // rbx
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int)a3;
  if ( this )
  {
    if ( a2 )
    {
      v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v6;
      if ( v6 )
      {
        v7 = CEnumerateEntries::CEnumerateEntries((CEnumerateEntries *)v6);
        *((_QWORD *)v7 + 2) = a2;
        *((_DWORD *)v7 + 6) = v3;
        (*(void (__fastcall **)(CEnumerateEntries *))(*(_QWORD *)v7 + 8LL))(v7);
        (*(void (__fastcall **)(CEnumerateEntries *))(*(_QWORD *)v7 + 16LL))(v7);
        *(_QWORD *)this = v7;
        return 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5DC,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v9 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5DA,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x80004003LL);
    }
  }
  else
  {
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D9,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
  }
  return v9;
}
