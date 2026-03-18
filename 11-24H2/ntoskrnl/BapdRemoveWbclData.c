/*
 * XREFs of BapdRemoveWbclData @ 0x140B4B2CC
 * Callers:
 *     PopBootLoaderSiDataProcess @ 0x140B6DEF0 (PopBootLoaderSiDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     BapdGetISRegistryKey @ 0x140B6C124 (BapdGetISRegistryKey.c)
 */

int BapdRemoveWbclData()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = BapdGetISRegistryKey(&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WBCL");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLDrtm");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLTrustpoint");
    result = ZwDeleteValueKey(KeyHandle, &DestinationString);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
