/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140106EC4
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x140106FC4 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140107058 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(__int64 a1, bool a2)
{
  unsigned __int8 v3; // bp
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 UserSessionState; // rax

  v3 = a1;
  v4 = W32GetUserSessionState(a1) + 3304;
  _InterlockedExchange64((volatile __int64 *)(v4 + 16), KeQueryPerformanceCounter(0LL).QuadPart);
  if ( (*(_BYTE *)(W32GetUserSessionState(v5) + 14340) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v6) + 14340) & 0x10) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v6) + 14358) & 0x40) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v6) + 14359) & 1) != 0 )
  {
    if ( !*(_DWORD *)(v4 + 28) )
    {
      _InterlockedExchange64((volatile __int64 *)v4, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v4 + 8), 0LL);
      UserSessionState = W32GetUserSessionState(v6);
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 16736), 0LL);
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 16744), 0LL);
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( CPTPProcessor::IsOurKey(v3, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  *(_DWORD *)(v4 + 28) = v7;
}
