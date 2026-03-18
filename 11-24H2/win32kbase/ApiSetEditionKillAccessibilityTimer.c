/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x14010A064
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A2700 (-AccessTimeOutReset@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EC220 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109140 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109C60 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F52B0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1401F54F0 (-StopFilterKeysTimers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(_QWORD, __int64); // rax

  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4944LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48)
                                                          + 4952LL);
      if ( v7 )
        return v7(0LL, a2);
    }
  }
  return v3;
}
