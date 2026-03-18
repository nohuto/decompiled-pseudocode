/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C0206B90
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00A30C0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CA0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B5DF0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6200 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01B6420 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6470 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C01B76F0 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C0296428 && (int)qword_1C0296428() >= 0 && qword_1C0296430 )
    return (unsigned int)qword_1C0296430(0LL, a2);
  return v2;
}
