/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x180104FBC
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18010422C (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A581C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D109C (-OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803DA9C0 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803DAD7C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     GetSidStringFromToken @ 0x180105044 (GetSidStringFromToken.c)
 *     GetAssignedAccessTypeForUser_0 @ 0x1801055B8 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  HLOCAL hMem[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(hMem, 0, 24);
  if ( (int)GetSidStringFromToken(a1, (LPWSTR *)hMem) < 0 )
  {
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return 0LL;
  }
  else
  {
    GetAssignedAccessTypeForUser_0((unsigned __int16 *)hMem[0]);
    if ( hMem[0] )
      LocalFree(hMem[0]);
    return 0LL;
  }
}
