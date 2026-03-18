/*
 * XREFs of ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140255500
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402B3290 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmAsyncNotifyWindowNormalRectChange @ 0x140323AA4 (DwmAsyncNotifyWindowNormalRectChange.c)
 */

void __fastcall CHECKPOINT::SendNormalToDwm(CHECKPOINT *this, const struct tagWND *a2)
{
  BOOL v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // di
  char v7; // si
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  void *v12; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19200) + 48LL) & 0x400) != 0 )
  {
    v3 = IsTopLevelWindow((__int64)a2);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)&WPP_GLOBAL_Control;
      v6 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v7 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v6 = 0;
      }
      if ( v7 || v6 )
      {
        v8 = *(_QWORD *)a2;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v10) = v6;
        LOBYTE(v11) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          4,
          13,
          (__int64)&WPP_b6344e787f9c38fd67b335c61b846d12_Traceguids,
          v8);
      }
      v12 = (void *)ReferenceDwmApiPort(v5, v4);
      DwmAsyncNotifyWindowNormalRectChange(v12);
    }
  }
}
