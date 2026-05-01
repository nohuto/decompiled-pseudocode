/*
 * XREFs of ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18024B778
 * Callers:
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18024AF10 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18024D010 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024D0C0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1804605C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x18045F440 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuEnabled(XamlLauncher *this, enum LauncherTelemetry::Mode *a2)
{
  bool result; // al
  char v5; // cl

  if ( IsStartMenuSuppressedByShellConfigRegistry() )
  {
    if ( a2 )
      *(_DWORD *)a2 = 25;
    return 0;
  }
  else
  {
    v5 = *((_BYTE *)this + 352);
    if ( v5 || *((_BYTE *)this + 354) || (result = 1, *((_BYTE *)this + 355)) )
      result = 0;
    if ( a2 )
    {
      if ( v5 )
      {
        *(_DWORD *)a2 = 3;
      }
      else if ( *((_BYTE *)this + 354) )
      {
        *(_DWORD *)a2 = 21;
      }
      else
      {
        *(_DWORD *)a2 = *((_BYTE *)this + 355) != 0 ? 0x18 : 0;
      }
    }
  }
  return result;
}
