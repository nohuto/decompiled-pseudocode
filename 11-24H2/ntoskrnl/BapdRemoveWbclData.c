/*
 * XREFs of BapdRemoveWbclData @ 0x140B4D30C
 * Callers:
 *     PopBootLoaderSiDataProcess @ 0x140B6F990 (PopBootLoaderSiDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 *     BapdGetISRegistryKey @ 0x140B6D9C8 (BapdGetISRegistryKey.c)
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
