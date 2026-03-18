/*
 * XREFs of _SetCaretBlinkTime @ 0x1400925C0
 * Callers:
 *     NtUserSetCaretBlinkTime @ 0x140092580 (NtUserSetCaretBlinkTime.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946B8 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946FC (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19928);
  *(_DWORD *)(v4 + 4984) = a1;
  v6 = PtiCurrent(v4, v5);
  v7 = *((_QWORD *)v6 + 59);
  if ( *(_QWORD *)(v7 + 392) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v7 + 344), *((struct tagQ **)v6 + 59));
    CreateCaretTimer(*(struct tagWND **)(v7 + 344), (struct tagQ *)v7);
  }
  return 1LL;
}
