/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x14014E554
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x14014DB64 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x14006FE80 (WdmlibRtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueGetDword(__int64 a1, const WCHAR *a2, __int64 a3, _DWORD *a4)
{
  NTSTATUS result; // eax
  void *v6; // r10
  int v7; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+54h] [rbp-14h]

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  v7 = 0;
  if ( result >= 0 )
  {
    ResultLength = 0;
    result = ZwQueryValueKey(
               v6,
               &DestinationString,
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
