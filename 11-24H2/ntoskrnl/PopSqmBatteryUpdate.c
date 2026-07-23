/*
 * XREFs of PopSqmBatteryUpdate @ 0x140AA3C3C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopSqmAddToStream @ 0x14049ABB8 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1404C9654 (PopSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
