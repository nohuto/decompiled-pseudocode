/*
 * XREFs of ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402889B4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028880C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

char __fastcall UpdateWindowKeyWindowCloak(__int64 a1, unsigned int a2)
{
  __int64 ShellSpecialWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  bool v6; // bl
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  ShellSpecialWindow = ShellWindowManagement::GetShellSpecialWindow(a1, 1LL);
  v5 = ShellSpecialWindow;
  if ( !ShellSpecialWindow || a2 == 1 && (_GetWindowCloakState(ShellSpecialWindow) & 1) == 0 )
    return 0;
  v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      6,
      10,
      (__int64)&WPP_0735e9b686cf323d257ae8be9898a1d6_Traceguids,
      a2);
  }
  zzzUpdateWindowCompositionCloak(v5, a2, 1LL);
  return 1;
}
