/*
 * XREFs of DifIoCreateDeviceWrapper @ 0x140625210
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 */

__int64 __fastcall DifIoCreateDeviceWrapper(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  __int64 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int64 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int64 *i; // rbx
  __int64 v17; // rdx
  BOOLEAN v18; // di
  __int64 *j; // rbx
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  BOOLEAN v22; // [rsp+50h] [rbp-30h]
  ULONG v23; // [rsp+54h] [rbp-2Ch]
  ULONG v24; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *v25; // [rsp+60h] [rbp-20h]
  ULONG v26; // [rsp+68h] [rbp-18h]
  struct _DRIVER_OBJECT *v27; // [rsp+70h] [rbp-10h]
  unsigned int Device; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(355);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v27 = a1;
  v23 = DeviceCharacteristics;
  v22 = Exclusive;
  v21[1] = DeviceObject;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v21, v11);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Device = IoCreateDevice(a1, a2, a3, a4, DeviceCharacteristics, Exclusive, DeviceObject);
  if ( v12 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v21, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Device;
}
