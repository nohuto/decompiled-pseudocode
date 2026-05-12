/*
 * XREFs of PortpReadMaximumLogicalUnitEntry @ 0x1401B3B38
 * Callers:
 *     PortReadRegistrySettings @ 0x1401B3724 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMaximumLogicalUnitEntry(
        HANDLE KeyHandle,
        unsigned __int8 *KeyValueInformation,
        unsigned int *a3)
{
  unsigned int v6; // edx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"MaximumLogicalUnit");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *a3 = v6;
  if ( v6 > 8 )
    *a3 = 8;
  return 1;
}
