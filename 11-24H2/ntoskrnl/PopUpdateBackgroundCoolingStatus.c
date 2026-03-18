/*
 * XREFs of PopUpdateBackgroundCoolingStatus @ 0x140ABC6E4
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopUpdateBackgroundCoolingStatus(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+48h] [rbp-20h] BYREF

  v3 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  v2 = a1 != 0;
  return ZwUpdateWnfStateData((__int64)&v3, (__int64)&v2);
}
