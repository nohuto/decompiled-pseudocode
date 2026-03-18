/*
 * XREFs of ?SetDelayableTimer@@YAXKK@Z @ 0x14016F68C
 * Callers:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     xxxTimersProc @ 0x14023F100 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelayableTimer(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  __int64 v6; // rax

  v2 = a1;
  v3 = a2;
  v4 = -10000LL * (int)a1;
  if ( (_DWORD)a1 == (_DWORD)a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    KeSetTimer(*(PKTIMER *)(UserSessionState + 57616), (LARGE_INTEGER)v4, 0LL);
  }
  else
  {
    v6 = W32GetUserSessionState(a1, a2);
    KeSetCoalescableTimer(*(PKTIMER *)(v6 + 57616), (LARGE_INTEGER)v4, 0, v3 - v2, 0LL);
  }
}
