/*
 * XREFs of ACPIQueryPhysicalDeviceLocation @ 0x1400ADA38
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1400AEE04 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIQueryPhysicalDeviceLocation(__int64 a1)
{
  NTSTATUS v2; // esi
  char *v3; // rbx
  struct _DEVICE_OBJECT *v4; // rcx
  _BYTE *Data; // rbx
  const GUID *i; // rbx
  PVOID *v7; // rbx
  struct _DEVICE_OBJECT *v8; // rcx
  PVOID v9; // rcx
  __int64 v11; // rax
  struct _DEVICE_OBJECT *v12; // rcx
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-59h] BYREF
  PVOID P[10]; // [rsp+58h] [rbp-49h] BYREF
  DEVPROPKEY v15; // [rsp+A8h] [rbp+7h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+C0h] [rbp+1Fh] BYREF

  memset(P, 0, 0x48uLL);
  SymbolicLinkName = 0LL;
  v2 = ACPIProcessPhysicalDeviceLocation(a1, 0LL, P);
  if ( v2 >= 0 )
  {
    v3 = (char *)P[2];
    if ( P[2] )
    {
      v2 = IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 784),
             &DEVPKEY_Device_PhysicalDeviceLocation,
             0,
             0,
             0x1003u,
             0x14u,
             (char *)P[2] + 16);
      if ( v2 >= 0 )
      {
        v4 = *(struct _DEVICE_OBJECT **)(a1 + 784);
        Data = v3 + 52;
        if ( (*Data & 0x1F) != 0 )
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0x1003u, 0x10u, Data);
        else
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0, 0, 0LL);
      }
    }
    for ( i = (const GUID *)P[5]; i != (const GUID *)&P[5]; i = *(const GUID **)&i->Data1 )
    {
      v2 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 784),
             i + 1,
             (PUNICODE_STRING)((unsigned __int64)&i[2] & -(__int64)(*(_QWORD *)i[2].Data4 != 0LL)),
             &SymbolicLinkName);
      if ( v2 >= 0 )
      {
        v2 = IoSetDeviceInterfacePropertyData(
               &SymbolicLinkName,
               &DEVPKEY_Device_PhysicalDeviceLocation,
               0LL,
               0LL,
               4099,
               20,
               i[-5].Data4);
        if ( v2 >= 0 )
        {
          if ( (i[-3].Data4[4] & 0x1F) != 0 )
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              4099,
              16,
              &i[-3].Data4[4]);
          else
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              0,
              0,
              0LL);
        }
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
    }
    v7 = (PVOID *)P[3];
    PropertyKey.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationPanel;
    PropertyKey.pid = 2;
    v15.pid = 2;
    v15.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationJoint;
    while ( 1 )
    {
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 784);
      if ( v7 == &P[3] )
        break;
      v2 = IoSetDevicePropertyData(v8, &PropertyKey, 0, 0, 0x1003u, 0x14u, v7 - 7);
      if ( v2 >= 0 )
      {
        v12 = *(struct _DEVICE_OBJECT **)(a1 + 784);
        if ( (*((_BYTE *)v7 - 36) & 0x1F) != 0 )
          IoSetDevicePropertyData(v12, &v15, 0, 0, 0x1003u, 0x10u, (char *)v7 - 36);
        else
          IoSetDevicePropertyData(v12, &v15, 0, 0, 0, 0, 0LL);
      }
      ++PropertyKey.pid;
      ++v15.pid;
      v7 = (PVOID *)*v7;
    }
    while ( !IoSetDevicePropertyData(v8, &PropertyKey, 0, 0, 0, 0, 0LL) )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 784), &v15, 0, 0, 0, 0, 0LL);
      ++PropertyKey.pid;
      ++v15.pid;
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 784);
    }
    while ( 1 )
    {
      v9 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v11 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v11 + 8) = P;
      ACPIFreePhysicalDeviceLocationDescriptor(v9);
    }
  }
  return (unsigned int)v2;
}
