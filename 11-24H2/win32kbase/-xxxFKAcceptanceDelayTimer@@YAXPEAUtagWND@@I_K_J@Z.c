/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F57A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx

  v5 = *(unsigned int *)(W32GetUserSessionState(a1) + 20524);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5);
  v8 = W32GetUserSessionState(v7);
  v9 = *(_DWORD *)(UserSessionState + 20616);
  v10 = *(_DWORD *)(v8 + 20620);
  v12 = W32GetUserSessionState(v11);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v12 + 20608), v9, v10) )
  {
    v14 = *(_DWORD *)(UserSessionState + 20616);
    v15 = W32GetUserSessionState(v13);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v15 + 20608), (struct _CLIPOBJ *)v14, 0, 0, 0LL, 0LL);
  }
  v16 = *(_DWORD *)(UserSessionState + 20536);
  if ( v16 )
  {
    v18 = *(unsigned int *)(UserSessionState + 20532);
    if ( !(_DWORD)v18 )
      v18 = v16;
    *(_QWORD *)(UserSessionState + 20552) = ApiSetEditionSetAccessibilityTimer(
                                              a3,
                                              v18,
                                              (__int64)xxxFKRepeatRateTimer,
                                              1u);
    *(_QWORD *)(W32GetUserSessionState(v19) + 20560) = 0LL;
  }
  else
  {
    v17 = W32GetUserSessionState(v13);
    *(_DWORD *)(v17 + 67056) |= 0x800u;
  }
}
