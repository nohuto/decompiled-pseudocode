/*
 * XREFs of ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402B3290
 * Callers:
 *     NtUserDwmWindowNotificationsEnabled @ 0x1402944A0 (NtUserDwmWindowNotificationsEnabled.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140255500 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1403238DC (DwmAsyncNotifyForegroundChange.c)
 *     DwmAsyncWindowNotificationsStateSynced @ 0x14032420C (DwmAsyncWindowNotificationsStateSynced.c)
 */

__int64 __fastcall OnDwmWindowNotificationClientRegistered(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *i; // rsi
  __int64 v12; // rdi
  int v13; // ebx
  void *v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rdx
  CHECKPOINT *v21; // rax
  void *v22; // rax
  __int64 v23; // rax

  if ( (_DWORD)a1 )
  {
    v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19200);
    *(_DWORD *)(v2 + 48) |= 0x400u;
    if ( *(_QWORD *)(W32GetUserSessionState(v2, v3) + 18944) )
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944);
      if ( *(_QWORD *)(v5 + 128) )
      {
        UserSessionState = W32GetUserSessionState(v5, v4);
        v8 = (void *)ReferenceDwmApiPort(*(_QWORD *)(UserSessionState + 18944), v7);
        DwmAsyncNotifyForegroundChange(v8);
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19200) + 8LL) + 24LL);
    for ( i = *(__int64 **)(v10 + 112); i; i = (__int64 *)i[11] )
    {
      v12 = *i;
      v13 = *(_DWORD *)(i[5] + 28);
      v14 = (void *)ReferenceDwmApiPort(v10, v9);
      DwmAsyncChildStyleChange(v14, v12, -16, v13);
      v15 = *i;
      v16 = *(_DWORD *)(i[5] + 24);
      v19 = (void *)ReferenceDwmApiPort(v18, v17);
      DwmAsyncChildStyleChange(v19, v15, -20, v16);
      v21 = CHECKPOINT::Get((const struct tagWND *)i, v20);
      if ( v21 )
        CHECKPOINT::SendNormalToDwm(v21, (const struct tagWND *)i);
    }
    v22 = (void *)ReferenceDwmApiPort(v10, v9);
    DwmAsyncWindowNotificationsStateSynced(v22);
  }
  else
  {
    v23 = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(*(_QWORD *)(v23 + 19200) + 48LL) &= ~0x400u;
  }
  return 0LL;
}
