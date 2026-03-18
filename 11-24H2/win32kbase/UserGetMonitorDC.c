/*
 * XREFs of UserGetMonitorDC @ 0x140099680
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     _ReleaseDC @ 0x140023770 (_ReleaseDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400997AC (-MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 */

__int64 __fastcall UserGetMonitorDC(void *a1)
{
  __int64 MonitorDC; // rdi
  __int64 v2; // rcx
  struct tagMONITOR *v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 DCEx; // rsi
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax

  MonitorDC = 0LL;
  v3 = MonitorFromHdev(a1);
  if ( v3 )
  {
    v4 = *((_QWORD *)PtiCurrent(v2) + 62);
    if ( v4 )
    {
      DCEx = GetDCEx(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL), 0LL, 8388611LL);
      if ( DCEx )
      {
        UserSessionState = W32GetUserSessionState(v5);
        GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
        v9 = *(_QWORD *)(W32GetUserSessionState(v8) + 57008);
        for ( i = *(_QWORD *)(v9 + 24); ; i = *(_QWORD *)i )
        {
          v9 = *(_QWORD *)(W32GetUserSessionState(v9) + 57008) + 24LL;
          if ( i == v9 )
            break;
          v11 = *(_DWORD *)(i + 48);
          if ( (v11 & 0x400800) == 0 && *(_QWORD *)(i + 16) == DCEx && (v11 & 0x1000) != 0 && !*(_QWORD *)(i + 72) )
          {
            MonitorDC = i;
            break;
          }
        }
        MonitorDC = GetMonitorDC(MonitorDC, v3, 1LL);
        ReleaseDC(DCEx);
        v13 = W32GetUserSessionState(v12);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v13 + 57008) + 48LL));
      }
    }
  }
  return MonitorDC;
}
