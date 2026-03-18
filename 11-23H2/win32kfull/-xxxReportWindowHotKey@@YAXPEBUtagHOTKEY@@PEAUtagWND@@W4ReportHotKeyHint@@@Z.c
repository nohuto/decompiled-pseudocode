/*
 * XREFs of ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1C013AA08
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C009CD54 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013A874 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 */

void __fastcall xxxReportWindowHotKey(__int64 a1, struct tagTHREADINFO **a2, char a3)
{
  bool v4; // di
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = a3 & 1;
  if ( *(_DWORD *)(a1 + 40) == -7 )
    *(_DWORD *)(SGDGetUserSessionState(a1) + 13828) = 0;
  ShellHangDetection::Execute((ShellHangDetection *)a1);
  if ( *(_QWORD *)(SGDGetUserSessionState(v7) + 13784) )
    *(_QWORD *)(SGDGetUserSessionState(v8) + 13784) = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 == a1 + 56 )
  {
    PostMessage((struct tagWND *)a2, 0x112u, 0xF130uLL, 0LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, a2[2], v4);
  }
  else
  {
    xxxReportHotKeyToShell(
      *(__int64 **)(v9 - 24),
      *(unsigned __int16 *)(a1 + 32) | (*(unsigned __int16 *)(a1 + 36) << 16),
      *(int *)(v9 - 12),
      *(_QWORD *)(v9 - 8),
      a3);
  }
}
