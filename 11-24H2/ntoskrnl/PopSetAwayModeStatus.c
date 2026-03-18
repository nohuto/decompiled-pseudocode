/*
 * XREFs of PopSetAwayModeStatus @ 0x140753D44
 * Callers:
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 *     PopBroadcastSessionInfo @ 0x140A93E70 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopSetAwayModeStatus(char a1)
{
  __int64 result; // rax
  BOOL v3; // [rsp+20h] [rbp-38h] BYREF
  GUID v4; // [rsp+28h] [rbp-30h] BYREF
  BOOL v5; // [rsp+38h] [rbp-20h]

  v3 = a1 != 0;
  v5 = v3;
  v4 = GUID_SYSTEM_AWAYMODE;
  PopBroadcastSessionInfo(0LL, 20LL, &v4);
  result = PopSetPowerSettingValueAcDc(&GUID_SYSTEM_AWAYMODE, 4LL, &v3);
  byte_140F0BA51 = a1;
  return result;
}
