/*
 * XREFs of IsShellProcess @ 0x1C00A688C
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C0015E40 (NtUserSetInteractiveControlFocus.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C0043718 (_anonymous_namespace_--CheckAllowForeground.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0072BD4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserRegisterShellPTPListener @ 0x1C00A3CA0 (NtUserRegisterShellPTPListener.c)
 *     NtUserShellRegisterHotKey @ 0x1C00A3E90 (NtUserShellRegisterHotKey.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00A42E4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserGetWindowProcessHandle @ 0x1C00A45B0 (NtUserGetWindowProcessHandle.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00A67B8 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     NtUserRegisterEdgy @ 0x1C01D8830 (NtUserRegisterEdgy.c)
 *     ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x1C021D010 (ShellHangDetection--_anonymous_namespace_--ReportHungShellToWer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 344);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) == a1;
  return v2;
}
