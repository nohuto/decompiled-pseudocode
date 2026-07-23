/*
 * XREFs of PipGetDriverKsrGuid @ 0x140719810
 * Callers:
 *     IoEnumerateKsrPersistentMemoryEx @ 0x1405A1170 (IoEnumerateKsrPersistentMemoryEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140718FD0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1407199A0 (PipGetPersistentMemory.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x1407198D0 (PipGetDriverKsrGuidRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PipGetDriverKsrGuid(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int DriverKsrGuidRegistryValue; // ebx
  char v6; // [rsp+20h] [rbp-20h]
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF
  HANDLE v9; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  v3 = *(_QWORD *)(a1 + 48) + 24LL;
  Handle = (HANDLE)-1LL;
  v9 = (HANDLE)-1LL;
  v7 = 0LL;
  DriverKsrGuidRegistryValue = PipOpenServiceEnumKeys(v3, 131097LL, &v9, 0LL, v6);
  if ( DriverKsrGuidRegistryValue >= 0 )
  {
    *((_QWORD *)&v7 + 1) = L"Parameters";
    LODWORD(v7) = 1441812;
    DriverKsrGuidRegistryValue = IopOpenRegistryKeyEx(&Handle, v9, &v7, 131097LL);
    if ( DriverKsrGuidRegistryValue >= 0 )
      DriverKsrGuidRegistryValue = PipGetDriverKsrGuidRegistryValue(Handle, a2);
  }
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    Handle = (HANDLE)-1LL;
  }
  if ( v9 != (HANDLE)-1LL )
    ZwClose(v9);
  return (unsigned int)DriverKsrGuidRegistryValue;
}
