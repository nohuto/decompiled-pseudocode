/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1400DAE14
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1400DA424 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400AAEF0 (WdmlibRtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

int __fastcall CmRegUtilWstrValueGetDword(void *KeyHandle, wchar_t *ValueName, unsigned int Value, unsigned int *a4)
{
  int result; // eax
  void *v6; // r10
  unsigned int v7; // ebx
  unsigned int ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING unicodeStringValueName; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v12; // [rsp+54h] [rbp-14h]

  unicodeStringValueName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, ValueName);
  v7 = 0;
  if ( result >= 0 )
  {
    ResultLength = 0;
    result = ZwQueryValueKey(
               v6,
               &unicodeStringValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x10u,
               &ResultLength);
    if ( result >= 0 )
    {
      if ( v11 == 4 )
        v7 = v12;
      else
        result = -1073741788;
    }
    *a4 = v7;
  }
  return result;
}
