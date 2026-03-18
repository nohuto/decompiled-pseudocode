/*
 * XREFs of GetTopMostInsertAfter @ 0x14022F0DC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14022AA20 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall GetTopMostInsertAfter(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 DesktopWindow; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *i; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = UserSessionState;
  if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29C )
  {
    v7 = PtiCurrent(v4, v5);
    if ( v7 != *(struct tagTHREADINFO **)(v6 + 19136) )
    {
      v9 = *((_QWORD *)v7 + 58);
      if ( (*(_DWORD *)(v9 + 12) & 0x200000) == 0 )
      {
        v10 = *((_QWORD *)v7 + 62);
        if ( v10 != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63016)
          && v10 == *(_QWORD *)(*(_QWORD *)(v6 + 19136) + 496LL) )
        {
          DesktopWindow = GetDesktopWindow(a1);
          if ( DesktopWindow == v12 )
          {
            for ( i = *(_QWORD **)(v12 + 112); i && (*(_BYTE *)(i[5] + 24LL) & 8) != 0; i = (_QWORD *)i[11] )
            {
              if ( v13 == i[2] )
                return i;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
