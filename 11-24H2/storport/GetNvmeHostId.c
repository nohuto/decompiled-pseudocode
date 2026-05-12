/*
 * XREFs of GetNvmeHostId @ 0x14006DEFC
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x140074180 (StorPortNvmeofExtendedFunction.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     BuildNvmeConnectData @ 0x140119190 (BuildNvmeConnectData.c)
 *     NvmeAdapterGetHostInformation @ 0x140198AE8 (NvmeAdapterGetHostInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall GetNvmeHostId(_OWORD *a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rcx
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ValueName; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName_8; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+98h] [rbp-70h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v12; // [rsp+ACh] [rbp-5Ch]
  int v13; // [rsp+B0h] [rbp-58h]
  UUID v14; // [rsp+B4h] [rbp-54h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ValueName = 0;
  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *a1 = 0LL;
  DestinationString_8 = 0LL;
  ValueName_8 = 0LL;
  v10 = 0LL;
  v3 = *(_QWORD *)&NvmeHostId.Data1;
  if ( !*(_QWORD *)&NvmeHostId.Data1 )
    v3 = *(_QWORD *)NvmeHostId.Data4 - *((_QWORD *)&v10 + 1);
  if ( v3 )
    goto LABEL_15;
  if ( NvmeHostIdChecked )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString_8, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&ValueName_8, L"NvmeHostId");
    v2 = ZwQueryValueKey(KeyHandle, &ValueName_8, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ValueName);
    if ( v2 < 0 )
    {
      v2 = ExUuidCreate(&NvmeHostId);
      if ( v2 >= 0 )
        v2 = ZwSetValueKey(KeyHandle, &ValueName_8, 0, 3u, (PVOID)&NvmeHostId, 0x10u);
    }
    else if ( v12 == 3 && v13 == 16 )
    {
      NvmeHostId = v14;
    }
    else
    {
      v2 = -1073739509;
    }
    NvmeHostIdChecked = 1;
    ZwClose(KeyHandle);
    if ( v2 >= 0 )
LABEL_15:
      *a1 = NvmeHostId;
  }
  return (unsigned int)v2;
}
