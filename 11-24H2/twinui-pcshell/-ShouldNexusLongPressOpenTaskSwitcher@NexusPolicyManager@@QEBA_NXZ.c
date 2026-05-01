/*
 * XREFs of ?ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ @ 0x180369C24
 * Callers:
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

bool __fastcall NexusPolicyManager::ShouldNexusLongPressOpenTaskSwitcher(NexusPolicyManager *this)
{
  unsigned int v2; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)IsGamingFullScreenExperienceActive(this) )
    return 1;
  v2 = IsGamingFullScreenExperienceSupported() != 0;
  SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"NexusOpensTaskSwitcher", &v2);
  return v2 != 0;
}
