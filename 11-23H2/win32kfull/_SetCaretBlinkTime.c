/*
 * XREFs of _SetCaretBlinkTime @ 0x1C00D5620
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     NtUserSetCaretBlinkTime @ 0x1C00D55E0 (NtUserSetCaretBlinkTime.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0006384 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0062D2C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v3; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  *(_DWORD *)(gpsi + 4984LL) = a1;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v3 + 352) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v3 + 304), *(struct tagQ **)(gptiCurrent + 432LL));
    CreateCaretTimer(*(struct tagWND **)(v3 + 304), (struct tagQ *)v3);
  }
  return 1LL;
}
