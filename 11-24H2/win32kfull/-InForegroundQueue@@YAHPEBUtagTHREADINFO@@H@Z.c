/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8
 * Callers:
 *     CheckCursorClipAccess @ 0x1400932B0 (CheckCursorClipAccess.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140240DA0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1401566A4 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1401D4B30 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v6 = 0;
  if ( !(unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 58)) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) )
      return 0LL;
    if ( *((_QWORD *)a1 + 59) != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944)
      && (*(_DWORD *)(*((_QWORD *)a1 + 58) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v6) = (unsigned int)ForegroundInputOwnerMatch(a1, a2) != 0;
      return v6;
    }
  }
  return 1LL;
}
