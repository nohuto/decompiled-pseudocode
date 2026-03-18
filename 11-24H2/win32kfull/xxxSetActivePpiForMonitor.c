/*
 * XREFs of xxxSetActivePpiForMonitor @ 0x140269094
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x140245820 (NtUserSetActiveProcessForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxRefreshDisplayOrientation @ 0x1402690E0 (xxxRefreshDisplayOrientation.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x140270310 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxSetActivePpiForMonitor(__int64 a1, struct tagMONITOR *a2)
{
  __int64 result; // rax

  if ( !a2 || (result = IsMonitorConnectedToInternalPanel(a2), (_DWORD)result) )
  {
    *(_QWORD *)(*((_QWORD *)PtiCurrent(a1, (__int64)a2) + 62) + 256LL) = a1;
    return xxxRefreshDisplayOrientation();
  }
  return result;
}
