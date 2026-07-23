/*
 * XREFs of PfpGetParameter @ 0x1407464D0
 * Callers:
 *     PfSnParametersRead @ 0x140745FC0 (PfSnParametersRead.c)
 *     PfpParametersRead @ 0x1407465C0 (PfpParametersRead.c)
 *     PfpSetBaseTime @ 0x14074698C (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140C2EE60 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __fastcall PfpGetParameter(HANDLE KeyHandle, const WCHAR *a2, int a3, void *a4, unsigned int *a5)
{
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  ULONG Length; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v13; // [rsp+54h] [rbp-134h]
  unsigned int Src; // [rsp+58h] [rbp-130h]
  int Src_4; // [rsp+5Ch] [rbp-12Ch] BYREF

  Length = 272;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             Length,
             &Length);
  if ( result >= 0 )
  {
    if ( Length >= 0x10 )
    {
      if ( v13 == a3 )
      {
        v9 = Src;
        if ( Src <= *a5 )
        {
          memmove(a4, &Src_4, Src);
          result = 0;
          *a5 = v9;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741788;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
