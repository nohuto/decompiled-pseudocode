/*
 * XREFs of PortpReadBusType @ 0x1401B37C0
 * Callers:
 *     PortReadStorageBusType @ 0x1401810C8 (PortReadStorageBusType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PortpReadBusType(HANDLE KeyHandle, char *KeyValueInformation, int *a3)
{
  int v6; // ecx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"BusType");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *a3 = v6;
  return v6 < 127;
}
