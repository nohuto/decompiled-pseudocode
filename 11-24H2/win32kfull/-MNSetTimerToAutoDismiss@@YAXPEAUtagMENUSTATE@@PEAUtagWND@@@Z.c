/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1401FB1A0
 * Callers:
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  int v2; // eax
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( (v2 & 0x800) != 0 && (v2 & 0x1000) == 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    if ( InternalSetTimer((__int64)a2, 65529LL, 16 * *(_DWORD *)(UserSessionState + 66072), 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
