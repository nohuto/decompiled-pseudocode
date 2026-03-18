/*
 * XREFs of _GetProcessWindowStation @ 0x1401038C0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     DesktopFromDesktopWindow @ 0x1401035EC (DesktopFromDesktopWindow.c)
 *     NtUserGetImeInfoEx @ 0x140103660 (NtUserGetImeInfoEx.c)
 *     EditionGetProcessWindowStationEntryPoint @ 0x140103880 (EditionGetProcessWindowStationEntryPoint.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140103E88 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     NtUserSetImeInfoEx @ 0x14029DA50 (NtUserSetImeInfoEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B3404 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // r9

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( a1 )
    *a1 = *(_QWORD *)(v3 + 664);
  return *(_QWORD *)(v3 + 656);
}
