/*
 * XREFs of PopSqmBatteryUpdate @ 0x140AA8B90
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopSqmAddToStream @ 0x1404A0538 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1404D04F4 (PopSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char PopSqmBatteryUpdate()
{
  char result; // al
  int v1; // ecx
  int v2; // r11d
  int v3; // r8d
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    PopSqmCreateDwordStreamEntry(v9, v1);
    PopSqmCreateDwordStreamEntry(v10, v2);
    LOBYTE(v4) = v3 == 0;
    PopSqmCreateDwordStreamEntry(v11, v4);
    PopSqmCreateDwordStreamEntry(v12, v5);
    return PopSqmAddToStream(v7, v6, v8, (__int64)v9);
  }
  return result;
}
