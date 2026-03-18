/*
 * XREFs of ReadQWORDSettingValue @ 0x1401B69EC
 * Callers:
 *     ReadInputHapticSettings @ 0x1401B67D0 (ReadInputHapticSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ReadQWORDSettingValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+4Ch] [rbp-2Ch]
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+54h] [rbp-24h]

  if ( !KeyHandle || !a2 )
    return -1073741816;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ResultLength = 0;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x18u,
             &ResultLength);
  if ( result >= 0 && v9 == 11 && v10 == 8 )
    *a3 = v11;
  return result;
}
