/*
 * XREFs of ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001AEA0
 * Callers:
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180032A40 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 * Callees:
 *     ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18003F9A0 (-TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA-AW4AppTypesBlockedTillConsoleUnlocked@@K@Z.c)
 */

float __fastcall CProcess::GetSessionDisplayPolicyVolume(CProcess *this)
{
  int AppsBlockedTillConsoleUnlocked; // eax

  AppsBlockedTillConsoleUnlocked = TsSessionIdGetAppsBlockedTillConsoleUnlocked(*((unsigned int *)this + 41));
  if ( !AppsBlockedTillConsoleUnlocked )
    return FLOAT_1_0;
  if ( *((_DWORD *)this + 106) )
  {
    if ( (AppsBlockedTillConsoleUnlocked & 1) == 0 )
      return FLOAT_1_0;
  }
  else if ( (AppsBlockedTillConsoleUnlocked & 2) == 0 )
  {
    return FLOAT_1_0;
  }
  return 0.0;
}
