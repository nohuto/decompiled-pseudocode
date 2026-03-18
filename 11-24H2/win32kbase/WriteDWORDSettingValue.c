/*
 * XREFs of WriteDWORDSettingValue @ 0x1401B6B04
 * Callers:
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WriteDWORDSettingValue(HANDLE KeyHandle, const WCHAR *a2, int a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF

  Data = a3;
  if ( !KeyHandle || !a2 )
    return -1073741816;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
}
