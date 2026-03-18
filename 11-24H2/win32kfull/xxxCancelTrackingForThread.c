/*
 * XREFs of xxxCancelTrackingForThread @ 0x1402AAEF0
 * Callers:
 *     xxxCancelTracking @ 0x1401195C8 (xxxCancelTracking.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     IsInsideMenuLoop @ 0x1401AEB6C (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140211824 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140248F40 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 */

void __fastcall xxxCancelTrackingForThread(struct tagTHREADINFO *a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rdi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rcx

  if ( a1 )
  {
    v2 = (struct MOVESIZEDATA *)*((_QWORD *)a1 + 89);
    if ( v2 )
    {
      v4 = *((_DWORD *)v2 + 50);
      v5 = (v4 >> 20) & 1;
      if ( ((v4 >> 20) & 1) != 0 )
      {
        DisableDwmSwCursorMoveSize(v5, a2);
        v4 = *((_DWORD *)v2 + 50) & 0xFFEFFFFF;
      }
      *((_DWORD *)v2 + 50) = v4 | 8;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x10) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v5, a2);
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 57008) + 48LL), 0LL, 0LL, 0);
        if ( (*((_DWORD *)v2 + 50) & 0x20) == 0 )
          xxxDrawDragRect(v2, 0LL, 2u);
      }
      _InterlockedAnd((volatile signed __int32 *)a1 + 132, 0xFFFFFFEF);
      if ( *((_QWORD *)a1 + 59) )
        SetWakeBit((__int64)a1, 2LL);
      if ( (unsigned int)IsInsideMenuLoop((__int64)a1) )
      {
        v7 = *((_QWORD *)a1 + 89);
        if ( v7 )
          PostMessage(*(_QWORD *)(v7 + 16), 31, 0, 0);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}
