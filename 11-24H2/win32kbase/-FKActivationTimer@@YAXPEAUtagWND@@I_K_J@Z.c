/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F52B0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A064 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010A0D4 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140222058 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_DWORD *)(UserSessionState + 20568) == 1 )
    goto LABEL_20;
  if ( *(_DWORD *)(UserSessionState + 20568) != 2 )
  {
    if ( *(_DWORD *)(UserSessionState + 20568) != 3 )
    {
      if ( *(_DWORD *)(UserSessionState + 20568) == 4 )
      {
        *(_DWORD *)(UserSessionState + 20536) = 0;
        *(_DWORD *)(UserSessionState + 20540) = 0;
        *(_DWORD *)(UserSessionState + 20528) = 2000;
        if ( (*(_DWORD *)(W32GetUserSessionState(v4) + 20524) & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, v6, 3LL);
      }
      return;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v4) + 20524) & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, v7, 2LL);
    *(_DWORD *)(UserSessionState + 20536) = 0;
    *(_DWORD *)(UserSessionState + 20528) = 0;
    *(_DWORD *)(UserSessionState + 20540) = 1000;
LABEL_20:
    ++*(_DWORD *)(UserSessionState + 20568);
    v16 = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, (__int64)FKActivationTimer, 1u);
    *(_QWORD *)(W32GetUserSessionState(v17) + 20544) = v16;
    return;
  }
  v8 = *(unsigned int *)(W32GetUserSessionState(v4) + 20524);
  if ( (v8 & 1) == 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v8) + 20524) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v15, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(2LL);
    goto LABEL_20;
  }
  v9 = W32GetUserSessionState(v8);
  *(_DWORD *)(v9 + 20524) &= ~1u;
  v11 = *(unsigned int *)(W32GetUserSessionState(v10) + 20524);
  if ( (v11 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v11, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
  v13 = *(_QWORD *)(UserSessionState + 20552);
  if ( v13 )
  {
    ApiSetEditionKillAccessibilityTimer(v12, v13);
    *(_QWORD *)(UserSessionState + 20552) = 0LL;
  }
  v14 = *(_QWORD *)(UserSessionState + 20560);
  if ( v14 )
  {
    ApiSetEditionKillAccessibilityTimer(v12, v14);
    *(_QWORD *)(UserSessionState + 20560) = 0LL;
  }
}
