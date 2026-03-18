/*
 * XREFs of NtUserGetForegroundWindow @ 0x140242440
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 18944) )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18944);
    if ( *(_QWORD *)(v3 + 128) )
    {
      v6 = PtiCurrent(v3, v5);
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18944) + 128LL);
      v3 = *(_QWORD *)(v9 + 24);
      if ( *((_QWORD *)v6 + 62) == v3 )
      {
        UserSessionState = W32GetUserSessionState(v3, v9);
        v4 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                          *(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18944) + 128LL),
                          v11);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
