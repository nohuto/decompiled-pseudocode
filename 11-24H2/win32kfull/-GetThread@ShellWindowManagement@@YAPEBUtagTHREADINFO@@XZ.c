/*
 * XREFs of ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14021E180
 * Callers:
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x140289480 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x140294700 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A1AB0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402BFF08 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

const struct tagTHREADINFO *__fastcall ShellWindowManagement::GetThread(ShellWindowManagement *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const struct tagTHREADINFO *result; // rax

  v3 = *((_QWORD *)PtiCurrent((__int64)this, a2) + 62);
  result = 0LL;
  if ( *(_QWORD *)(v3 + 328) )
    return *(const struct tagTHREADINFO **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v3, v2) + 62) + 328LL) + 16LL);
  return result;
}
