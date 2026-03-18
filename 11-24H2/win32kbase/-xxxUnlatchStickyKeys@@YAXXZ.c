/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x140157A10
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140221FF8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxUnlatchStickyKeys(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 (__fastcall **v5)(struct tagKE *, unsigned int, int); // rcx
  bool v6; // zf

  UserSessionState = W32GetUserSessionState(a1);
  v3 = W32GetUserSessionState(v2);
  if ( *(_BYTE *)(v3 + 21905) )
  {
    v4 = 0;
    v5 = off_140246C80;
    while ( v4 < 5 )
    {
      ++v4;
      if ( *v5 == xxxStickyKeys )
      {
        xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21906), v4);
        v6 = *(_BYTE *)(v3 + 21905) == 0;
        *(_BYTE *)(v3 + 21905) = 0;
        if ( !v6 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        return;
      }
      ++v5;
    }
  }
}
