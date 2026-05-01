/*
 * XREFs of ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x1803698F8
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x18034D4B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180369E98 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall NexusPolicyManager::IsLegacyNexusEnabled(NexusPolicyManager *this)
{
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"LegacyGamepadXboxGuideButtonEnabled", &v3) >= 0
    && v3 )
  {
    return 1;
  }
  else
  {
    return *((_BYTE *)this + 24);
  }
}
