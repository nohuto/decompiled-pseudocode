/*
 * XREFs of PpmInitIllegalThrottleLogging @ 0x1405CA48C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1404A4918 (PopOpenKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 */

NTSTATUS PpmInitIllegalThrottleLogging()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v5; // [rsp+60h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = PopOpenKey(&KeyHandle, L"Control\\Session Manager\\Power");
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ProcessorThrottleLogInterval");
    v5 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      PopProcessorThrottleLogInterval = HIDWORD(KeyValueInformation);
      if ( HIDWORD(KeyValueInformation) > 0x2710 )
        PopProcessorThrottleLogInterval = 10000;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
