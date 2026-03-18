/*
 * XREFs of NtUserSetShellSpecialWindow @ 0x14029EA00
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C09C8 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

__int64 __fastcall NtUserSetShellSpecialWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  const struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
  v16[0] = 0;
  v17 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v6);
  v7 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1
      || a1
      && ((v8 = ValidateHwndStrict(a1), (v7 = v8) == 0)
       || *(_QWORD *)(*(_QWORD *)(v8 + 16) + 464LL) != *((_QWORD *)v5 + 58)
       || !IsTopLevelWindow(v8)
       || (_GetWindowCloakState(v7) & 1) == 0
       || (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 27LL) & 8) != 0) )
    {
LABEL_17:
      v12 = 87;
      goto LABEL_12;
    }
LABEL_19:
    ShellWindowManagement::SetShellSpecialWindow(*((_QWORD *)v5 + 62), v7, a2);
    v4 = 1LL;
    goto LABEL_20;
  }
  LOBYTE(v9) = IAMThreadAccessGranted(v5);
  if ( v9 )
  {
    if ( a1 )
    {
      v13 = ValidateHwndStrict(a1);
      v7 = v13;
      if ( !v13
        || (((*(_WORD *)(*(_QWORD *)(v13 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0
        || !IsTopLevelWindow(v13) )
      {
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18952) = 0LL;
    }
    goto LABEL_19;
  }
  v12 = 5;
LABEL_12:
  UserSetLastError(v12);
LABEL_20:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v14);
  return v4;
}
