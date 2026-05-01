/*
 * XREFs of ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804658D0
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180250AF0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180466F30 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1A28 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180465874 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 */

bool __fastcall XamlLauncherState::IsShowOrToggleBlocked(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( XamlLauncherState::IsSessionIdle(this) )
    return CortanaHelpers::AllowCortanaAboveLock() == 0;
  return v1;
}
