/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F58D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rax

  v5 = *(unsigned int *)(W32GetUserSessionState(a1) + 20524);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5);
  v7 = ApiSetEditionSetAccessibilityTimer(
         a3,
         *(unsigned int *)(UserSessionState + 20536),
         (__int64)xxxFKRepeatRateTimer,
         1u);
  *(_QWORD *)(W32GetUserSessionState(v8) + 20552) = v7;
  v10 = W32GetUserSessionState(v9);
  v11 = *(_DWORD *)(UserSessionState + 20616);
  LODWORD(v7) = *(_DWORD *)(v10 + 20620);
  v13 = W32GetUserSessionState(v12);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v13 + 20608), v11, v7) )
  {
    v15 = *(_DWORD *)(UserSessionState + 20616);
    v16 = W32GetUserSessionState(v14);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v16 + 20608), (struct _CLIPOBJ *)v15, 0, 0, 0LL, 0LL);
  }
}
