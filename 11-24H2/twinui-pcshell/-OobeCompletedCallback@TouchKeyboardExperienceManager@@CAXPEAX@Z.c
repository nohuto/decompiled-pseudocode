/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180473430
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18010463C (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A581C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(this);
  TouchKeyboardExperienceManager::UpdateOobeRunningState(this);
  if ( *((_QWORD *)this + 120) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)this + 120) = 0LL;
  }
}
