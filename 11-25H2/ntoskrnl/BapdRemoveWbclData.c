/*
 * XREFs of BapdRemoveWbclData @ 0x140B3B2CC
 * Callers:
 *     PopBootLoaderSiDataProcess @ 0x140B5EE44 (PopBootLoaderSiDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     BapdGetISRegistryKey @ 0x140B5D044 (BapdGetISRegistryKey.c)
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
