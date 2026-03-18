/*
 * XREFs of xxxMNReleaseCapture @ 0x1402688C4
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax

  v3 = PtiCurrent(a1, a2);
  v5 = v3;
  if ( a1 )
  {
    v6 = *(unsigned int *)(a1 + 8);
    if ( (v6 & 0x40000) != 0 )
    {
      LODWORD(v6) = v6 & 0xFFFBFFFF;
      *(_DWORD *)(a1 + 8) = v6;
      *(_DWORD *)(*((_QWORD *)v3 + 59) + 436LL) &= ~0x100000u;
      xxxReleaseCapture(v6, v4);
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944) )
      {
        v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944);
        if ( *(_QWORD *)(v12 + 120) )
        {
          v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944);
          if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v14 + 120) + 16LL) == v5 )
          {
            UserSessionState = W32GetUserSessionState(v14, v13);
            xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18944) + 120LL), 0, 1u, 33);
          }
        }
      }
    }
  }
}
