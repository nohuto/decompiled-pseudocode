/*
 * XREFs of ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801458C0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180189550 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x18024FE90 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x18024FF90 (-IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180250240 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802505B0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180250AF0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180464E5C (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x180465640 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180466F30 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18017E878 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsSearchDisabledByPolicy(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 1073) || *((_BYTE *)this + 1079) || IsFullscreenCXHRunning() )
    return 1;
  return v1;
}
