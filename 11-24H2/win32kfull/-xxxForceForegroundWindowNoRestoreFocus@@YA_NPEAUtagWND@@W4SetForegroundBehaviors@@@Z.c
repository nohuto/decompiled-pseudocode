/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x140232970
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1402305F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1402686C4 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserNavigateFocus @ 0x140299E00 (NtUserNavigateFocus.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a2 | 0x40;
  v4 = PtiCurrent(a1, a2);
  if ( (unsigned __int8)IsInputThread(v6, v5, v7)
    || *(struct tagTHREADINFO **)(W32GetUserSessionState(v9, v8) + 18704) == v4 )
  {
    v3 |= 0x400u;
  }
  return xxxSetForegroundWindowWithOptions(a1, 31LL, v3, 0LL);
}
