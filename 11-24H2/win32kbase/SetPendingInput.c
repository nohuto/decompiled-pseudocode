/*
 * XREFs of SetPendingInput @ 0x1400E95C0
 * Callers:
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 */

__int64 __fastcall SetPendingInput(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  EnterPowerCrit();
  if ( !*(_DWORD *)(W32GetUserSessionState(v2) + 2692) )
  {
    *(_DWORD *)(W32GetUserSessionState(v3) + 2696) = a1;
    *(_DWORD *)(W32GetUserSessionState(v4) + 2692) = 1;
  }
  return LeavePowerCrit();
}
