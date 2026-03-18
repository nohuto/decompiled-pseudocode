/*
 * XREFs of PnpWatchdogTimerStart @ 0x140833CE0
 * Callers:
 *     PnpEnableWatchdog @ 0x140833C84 (PnpEnableWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     WdtpArmTimer @ 0x14036F440 (WdtpArmTimer.c)
 */

__int64 __fastcall PnpWatchdogTimerStart(__int64 a1)
{
  unsigned int v1; // edx

  if ( *(_BYTE *)(a1 + 140) )
  {
    v1 = *(_DWORD *)(a1 + 132);
    *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 32);
  }
  return WdtpArmTimer(a1, v1);
}
