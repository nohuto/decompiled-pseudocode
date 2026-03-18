/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F6230
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxTwoKeysDown(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v1 = a1;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1) + 20628) & 0x100) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v2);
    *(_DWORD *)(UserSessionState + 20628) &= ~1u;
    v6 = *(unsigned int *)(W32GetUserSessionState(v4) + 20628);
    if ( (v6 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v5, 0LL);
    *(_BYTE *)(W32GetUserSessionState(v6) + 14052) = 0;
    *(_BYTE *)(W32GetUserSessionState(v7) + 14053) = 0;
  }
  v8 = W32GetUserSessionState(v2);
  xxxUpdateModifierState(*(unsigned __int8 *)(v8 + 21901), v1);
  *(_BYTE *)(W32GetUserSessionState(v9) + 21905) = 0;
  *(_BYTE *)(W32GetUserSessionState(v10) + 21906) = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  return *(_DWORD *)(W32GetUserSessionState(v11) + 20628) & 1;
}
