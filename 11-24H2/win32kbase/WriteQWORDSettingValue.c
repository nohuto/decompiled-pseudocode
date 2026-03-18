/*
 * XREFs of WriteQWORDSettingValue @ 0x1401B6ED4
 * Callers:
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WriteQWORDSettingValue(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 Data; // [rsp+60h] [rbp+18h] BYREF

  Data = a3;
  if ( !KeyHandle || !a2 )
    return -1073741816;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
}
