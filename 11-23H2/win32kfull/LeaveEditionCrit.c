/*
 * XREFs of LeaveEditionCrit @ 0x1C00A0030
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C003CF70 (NtUserUnhookWindowsHookEx.c)
 *     NtUserBuildHwndList @ 0x1C00B1800 (NtUserBuildHwndList.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C01D27F0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01D8AF0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserShellMigrateWindow @ 0x1C01DD400 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DD7E0 (NtUserShellSetWindowPos.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0247BE0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
