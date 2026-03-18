/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx

  v1 = *(unsigned int *)(W32GetUserSessionState(a1) + 20524);
  if ( (v1 & 1) != 0
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20628), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20636), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 20972), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 21004), (v1 & 1) != 0)
    || (v1 = *(unsigned int *)(W32GetUserSessionState(v1) + 21100), (v1 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v1) + 67056) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    *(_DWORD *)(UserSessionState + 20524) &= ~1u;
    xxxTurnOffStickyKeys();
    v4 = W32GetUserSessionState(v3);
    *(_DWORD *)(v4 + 20636) &= ~1u;
    v6 = W32GetUserSessionState(v5);
    *(_DWORD *)(v6 + 20972) &= ~1u;
    v8 = W32GetUserSessionState(v7);
    *(_DWORD *)(v8 + 21004) &= ~1u;
    v10 = W32GetUserSessionState(v9);
    *(_DWORD *)(v10 + 67056) &= ~0x8000u;
    v12 = W32GetUserSessionState(v11);
    *(_DWORD *)(v12 + 21100) &= ~1u;
    PostWinlogonMessage(1026LL);
    v14 = *(unsigned int *)(W32GetUserSessionState(v13) + 20948);
    if ( (v14 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v14, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag(v1);
}
