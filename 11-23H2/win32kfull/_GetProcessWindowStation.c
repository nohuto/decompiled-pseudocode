/*
 * XREFs of _GetProcessWindowStation @ 0x1C0028180
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0020430 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     DesktopFromDesktopWindow @ 0x1C002743C (DesktopFromDesktopWindow.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1C0028000 (EditionOpenInputDesktopEntryPoint.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00319D8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00685A0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetImeInfoEx @ 0x1C009A3C0 (NtUserSetImeInfoEx.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
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
    *a1 = *(_QWORD *)(v3 + 672);
  return *(_QWORD *)(v3 + 664);
}
