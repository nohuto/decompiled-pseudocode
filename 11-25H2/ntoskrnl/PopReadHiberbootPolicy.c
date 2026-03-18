/*
 * XREFs of PopReadHiberbootPolicy @ 0x140A7A7B8
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404A9304 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     PopReadHiberbootGroupPolicy @ 0x140A7A840 (PopReadHiberbootGroupPolicy.c)
 */

int __fastcall PopReadHiberbootPolicy(_BYTE *a1)
{
  char v1; // bl
  int result; // eax
  _BYTE v4[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v4[0] = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  result = PopReadHiberbootGroupPolicy(v4);
  if ( result >= 0 && v4[0] )
  {
    v1 = v4[0];
  }
  else
  {
    result = PopOpenPowerKey((__int64)&KeyHandle);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"HiberbootEnabled");
      v9 = 0;
      KeyValueInformation = 0LL;
      v1 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        v1 = BYTE12(KeyValueInformation);
      result = ZwClose(KeyHandle);
    }
  }
  *a1 = v1;
  return result;
}
