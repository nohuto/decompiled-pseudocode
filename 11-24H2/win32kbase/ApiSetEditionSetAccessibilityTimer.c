/*
 * XREFs of ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A2700 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109140 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109C60 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x14011C3E0 (-AccessTimeOut@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F52B0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F57A0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F58D0 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F5AF0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5C60 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     EditionSetAccessibilityTimer @ 0x140148774 (EditionSetAccessibilityTimer.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionSetAccessibilityTimer(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rbx
  int (*v9)(void); // rax

  v6 = a2;
  v8 = 0LL;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4928LL);
  if ( v9 && v9() >= 0 )
    return EditionSetAccessibilityTimer(a1, v6, a3, a4);
  return v8;
}
