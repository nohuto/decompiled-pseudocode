/*
 * XREFs of PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407597C4
 * Callers:
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404A48FC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopBatteryTestExemptPolicyRegKeyAccess(char a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-1h] BYREF
  int v8; // [rsp+68h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+70h] [rbp+17h] BYREF
  int *v10; // [rsp+90h] [rbp+37h]
  int v11; // [rsp+98h] [rbp+3Fh]
  int v12; // [rsp+9Ch] [rbp+43h]

  KeyHandle = 0LL;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BatteryTestExemptPolicy");
    if ( a1 )
    {
      result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopBatteryTestExemptPolicy, 4u);
    }
    else
    {
      result = ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 &KeyValueInformation,
                 0x14u,
                 &ResultLength);
      if ( result >= 0 )
      {
        result = 4;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
          && HIDWORD(KeyValueInformation) != PopBatteryTestExemptPolicy )
        {
          PopBatteryTestExemptPolicy = HIDWORD(KeyValueInformation);
          if ( (unsigned int)dword_140E07680 > 5 )
          {
            v12 = 0;
            v3 = HIDWORD(KeyValueInformation);
            v11 = 4;
            v10 = &v3;
            result = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E07680,
                       (unsigned __int8 *)byte_14004CCFB,
                       0LL,
                       0LL,
                       3u,
                       &v9);
          }
        }
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
