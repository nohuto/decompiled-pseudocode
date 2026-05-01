/*
 * XREFs of ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805842E0
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800B9260 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0StartupApproval@StartupDB@@QEAA@XZ @ 0x180583710 (--0StartupApproval@StartupDB@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UBLOCKEDITEMINFO@StartupDB@@U?$default_delete@UBLOCKEDITEMINFO@StartupDB@@@std@@@std@@QEAA@XZ @ 0x1805838DC (--1-$unique_ptr@UBLOCKEDITEMINFO@StartupDB@@U-$default_delete@UBLOCKEDITEMINFO@StartupDB@@@std@@.c)
 *     ??1?$unique_ptr@VStartupApproval@StartupDB@@U?$default_delete@VStartupApproval@StartupDB@@@std@@@std@@QEAA@XZ @ 0x180583900 (--1-$unique_ptr@VStartupApproval@StartupDB@@U-$default_delete@VStartupApproval@StartupDB@@@std@@.c)
 *     ?GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z @ 0x1805840C0 (-GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z.c)
 *     ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x180584218 (-Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall StartupAppMonitor::IsStartupAppEnabled(
        HKEY hKey,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  bool v6; // bl
  StartupDB::StartupApproval *v7; // rax
  StartupDB::StartupApproval *v8; // rsi
  unsigned __int16 *v9; // r8
  _DWORD *v10; // rdi
  int BlockedItemInfo; // eax
  const char *v12; // r9
  bool result; // al
  StartupDB::StartupApproval *v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  try
  {
    v7 = (StartupDB::StartupApproval *)operator new(0x10uLL);
    v8 = StartupDB::StartupApproval::StartupApproval(v7);
    v14 = v8;
    if ( !(unsigned int)StartupDB::StartupApproval::Initialize(v8, hKey, v9, a2) )
    {
      v10 = operator new(0xCuLL);
      *(_QWORD *)v10 = 0LL;
      v10[2] = 0;
      v16 = v10;
      BlockedItemInfo = StartupDB::StartupApproval::GetBlockedItemInfo(
                          (HKEY *)v8,
                          a3,
                          (struct StartupDB::BLOCKEDITEMINFO *)v10);
      if ( BlockedItemInfo == 2 || !BlockedItemInfo || BlockedItemInfo == 1630 )
        v6 = (*(_BYTE *)v10 & 1) == 0;
      std::unique_ptr<StartupDB::BLOCKEDITEMINFO>::~unique_ptr<StartupDB::BLOCKEDITEMINFO>(&v16);
    }
    std::unique_ptr<StartupDB::StartupApproval>::~unique_ptr<StartupDB::StartupApproval>(&v14);
    result = v6;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v12);
    return 0;
  }
  return result;
}
