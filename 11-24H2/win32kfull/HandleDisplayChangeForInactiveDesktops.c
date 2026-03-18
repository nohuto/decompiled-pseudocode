/*
 * XREFs of HandleDisplayChangeForInactiveDesktops @ 0x14024E340
 * Callers:
 *     xxxBroadcastModernAppRedraw @ 0x1402ADA10 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140049A98 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x140087650 (PostIAMShellHookMessageEx.c)
 */

char __fastcall HandleDisplayChangeForInactiveDesktops(__int64 a1, __int64 a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // ebp
  __int64 i; // rbx
  __int64 v8; // rcx
  struct tagWND *v9; // rcx

  UserSessionState = *(_QWORD *)(a1 + 40);
  v5 = a2;
  for ( i = *(_QWORD *)(UserSessionState + 16); i; i = *(_QWORD *)(i + 32) )
  {
    if ( i != a1 )
    {
      if ( v5 )
        LOBYTE(UserSessionState) = PostIAMShellHookMessageEx(i, 35LL, 0LL);
      *(_DWORD *)(i + 48) |= 0x20u;
    }
  }
  if ( a3 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v8 = *(_QWORD *)(UserSessionState + 18944);
    if ( v8 )
    {
      v9 = *(struct tagWND **)(v8 + 112);
      if ( v9 )
        LOBYTE(UserSessionState) = SendNotifyMessageAlways(v9, 0x1Fu, 0LL, 0LL, 1u);
    }
  }
  return UserSessionState;
}
