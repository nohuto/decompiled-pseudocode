/*
 * XREFs of CmpQueryLayerVersionUlong @ 0x1407D7BD4
 * Callers:
 *     CmpLoadLayerVersion @ 0x1407D7094 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionUlong(_DWORD *a1, const WCHAR *a2, void *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+5Ch] [rbp-A4h]

  DestinationString = 0LL;
  memset_0(KeyValueInformation, 0, 0x100uLL);
  ResultLength = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(a3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[1] == 4 )
    {
      if ( v11 + v10 == ResultLength )
      {
        if ( v11 == 4 )
        {
          result = 0;
          *a1 = *(_DWORD *)((char *)KeyValueInformation + v10);
        }
        else
        {
          return -1073741306;
        }
      }
      else
      {
        return -1073741764;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
