/*
 * XREFs of EditionDriverUninitialize @ 0x1401F2C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x1401F2DDC (-SessionCleanup@CTopologyManager@@SAXXZ.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F2EC4 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     FreeWin32kApiSetTable @ 0x1401F309C (FreeWin32kApiSetTable.c)
 *     FreePerSessionWin32kCall @ 0x1401F312C (FreePerSessionWin32kCall.c)
 *     ?CleanupFeedbackData@@YAXXZ @ 0x1401F3218 (-CleanupFeedbackData@@YAXXZ.c)
 *     ?UnInitialize@ShellForegroundBoost@@YAXXZ @ 0x14026C748 (-UnInitialize@ShellForegroundBoost@@YAXXZ.c)
 *     ?Cleanup@CursorApiRouter@@SAXXZ @ 0x14026C9C4 (-Cleanup@CursorApiRouter@@SAXXZ.c)
 *     ?UnInitialize@ForegroundLaunch@@YAXXZ @ 0x14028D81C (-UnInitialize@ForegroundLaunch@@YAXXZ.c)
 */

__int64 __fastcall EditionDriverUninitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  CMonitorTopology *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  ShellForegroundBoost *v14; // rcx
  ForegroundLaunch *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 SessionState; // rax
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 62984) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    Win32FreePool(*(void **)(UserSessionState + 62984));
    *(_QWORD *)(UserSessionState + 62984) = 0LL;
  }
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3LL);
  v8 = *(CMonitorTopology **)(W32GetUserSessionState(v6, v5) + 71488);
  if ( v8 )
    CMonitorTopology::Release(v8);
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63488) )
  {
    v11 = W32GetUserSessionState(v10, v9);
    Win32FreePool(*(void **)(v11 + 63488));
    *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63488) = 0LL;
  }
  CTopologyManager::SessionCleanup();
  ShellForegroundBoost::UnInitialize(v14);
  ForegroundLaunch::UnInitialize(v15);
  CursorApiRouter::Cleanup();
  CleanupFeedbackData();
  if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 57616) )
  {
    v20 = W32GetUserSessionState(v19, v18);
    KeCancelTimer(*(PKTIMER *)(v20 + 57616));
    v23 = W32GetUserSessionState(v22, v21);
    Win32FreePool(*(void **)(v23 + 57616));
    *(_QWORD *)(W32GetUserSessionState(v25, v24) + 57616) = 0LL;
  }
  SessionState = W32GetSessionState(v19, v18);
  FreePerSessionWin32kCall(SessionState + 144);
  v29 = W32GetSessionState(v28, v27);
  FreeWin32kApiSetTable(v29 + 144);
  return 0LL;
}
