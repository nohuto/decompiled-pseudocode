/*
 * XREFs of IoSetSystemPartition @ 0x140712750
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 */

NTSTATUS __stdcall IoSetSystemPartition(PUNICODE_STRING VolumeNameString)
{
  HANDLE v2; // rbx
  int v3; // edi
  int v4; // eax
  ULONG DataSize; // eax
  wchar_t *Data; // [rsp+20h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  int v12; // [rsp+60h] [rbp+7h] BYREF
  int v13; // [rsp+64h] [rbp+Bh]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+74h] [rbp+1Bh]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]

  Handle = 0LL;
  v2 = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM");
  v3 = IopOpenRegistryKeyEx(&Handle, 0LL, &DestinationString, 983103LL);
  if ( v3 >= 0 )
  {
    ValueName.Buffer = (wchar_t *)&v12;
    v12 = 6619219;
    v13 = 7667828;
    v14 = 112;
    *(_DWORD *)&ValueName.Length = 786442;
    v4 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &ValueName, 983103LL, 0, 0LL);
    v2 = KeyHandle;
    v3 = v4;
    if ( v4 >= 0 )
    {
      DataSize = VolumeNameString->Length + 2;
      v12 = 7929939;
      Data = VolumeNameString->Buffer;
      v13 = 7602291;
      v14 = 7143525;
      v15 = 6357072;
      v16 = 7602290;
      v17 = 7602281;
      v18 = 7274601;
      v19 = 110;
      *(_DWORD *)&ValueName.Length = 2097182;
      v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, DataSize);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ZwClose(v2);
  return v3;
}
