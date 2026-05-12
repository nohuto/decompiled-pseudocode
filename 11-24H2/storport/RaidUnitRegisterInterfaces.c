/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x14009FCC0
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortRegistryCreateKeyEx @ 0x14003882C (PortRegistryCreateKeyEx.c)
 *     PortMapBuildLunEntry @ 0x14013AD9C (PortMapBuildLunEntry.c)
 *     RaidUnitAddAclToVmDevices @ 0x14018BA6C (RaidUnitAddAclToVmDevices.c)
 *     PortGetDeviceType @ 0x1401B85BC (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  __int64 result; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONG v7; // r8d
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  _BYTE *v11; // rax
  struct _DEVICE_OBJECT *v12; // rcx
  struct _UNICODE_STRING *v13; // rsi
  GUID *v14; // rdx
  void *v15; // [rsp+40h] [rbp-28h]
  unsigned __int8 v16; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 1952);
  Handle = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v13 = (struct _UNICODE_STRING *)(a1 + 3536);
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v14 = &GUID_DEVINTERFACE_ZNSDISK;
LABEL_12:
    v5 = IoRegisterDeviceInterface(v12, v14, 0LL, v13);
    if ( v5 >= 0 )
    {
      v5 = IoSetDeviceInterfaceState(v13, 1u);
      if ( v5 < 0 )
        RtlFreeUnicodeString(v13);
    }
    return (unsigned int)v5;
  }
  v3 = *(_DWORD *)(a1 + 104);
  v16 = BYTE2(v3);
  result = PortRegistryCreateKeyEx(
             *(void **)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v3 + 2080),
             1u,
             &Handle,
             L"Target Id %d",
             BYTE1(v3));
  v5 = result;
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 112) & 0x1F) + 16);
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(v6 + 2 * v10) );
  PortMapBuildLunEntry((int)Handle, v16, v9, a1 + 120, v8, v7, v6, v10, v15);
  ZwClose(Handle);
  if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
  {
    v5 = RaidUnitAddAclToVmDevices(a1);
    if ( v5 >= 0 )
      v5 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_VMLUN,
             0LL,
             (PUNICODE_STRING)(a1 + 1960));
  }
  v11 = *(_BYTE **)(a1 + 112);
  if ( v11 && (*v11 & 0x1F) == 0xD )
  {
    v12 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    v13 = (struct _UNICODE_STRING *)(a1 + 2080);
    v14 = &GUID_DEVINTERFACE_SES;
    goto LABEL_12;
  }
  return (unsigned int)v5;
}
