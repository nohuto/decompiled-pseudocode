/*
 * XREFs of ?WinlogonHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140273BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1402B69A4 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 */

__int64 __fastcall WinlogonHotkeyCallback(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = a1;
  if ( a1 == 10 )
  {
    v2 = 15LL;
    v3 = 1026LL;
  }
  else
  {
    if ( a1 == 7 )
      TraceLoggingWinPHotKeyEvent();
    v2 = v1;
    v3 = 1028LL;
  }
  PostWinlogonMessage(v3, v2);
  return 0LL;
}
