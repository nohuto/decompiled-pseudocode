/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1402690E0
 * Callers:
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     NtUserSetDisplayAutoRotationPreferences @ 0x140226F60 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSetActivePpiForMonitor @ 0x140269094 (xxxSetActivePpiForMonitor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxRefreshDisplayOrientation(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66112) + 16LL))(*(_QWORD *)(UserSessionState + 66112));
}
