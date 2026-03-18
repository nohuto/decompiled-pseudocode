/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1401F55A0
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x14014D7E0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostRitSound @ 0x1401930B8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall TurnOffMouseKeys(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx

  UserSessionState = W32GetUserSessionState(a1);
  *(_DWORD *)(UserSessionState + 20636) &= ~1u;
  v3 = W32GetUserSessionState(v2);
  *(_DWORD *)(v3 + 67056) &= ~0x2000u;
  MKHideMouseCursor(v4);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5) + 20636) & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v6, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
