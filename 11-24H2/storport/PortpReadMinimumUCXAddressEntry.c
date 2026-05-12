/*
 * XREFs of PortpReadMinimumUCXAddressEntry @ 0x1401B3C94
 * Callers:
 *     PortReadRegistrySettings @ 0x1401B3724 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMinimumUCXAddressEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"MinimumUCXAddress");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 3
    || *((_DWORD *)KeyValueInformation + 3) != 8 )
  {
    return 0;
  }
  v6 = *(_QWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  v7 = *(_QWORD *)(a3 + 24) - 4096LL;
  *(_QWORD *)(a3 + 16) = v6;
  if ( v6 >= v7 )
    *(_QWORD *)(a3 + 16) = 0LL;
  return 1;
}
