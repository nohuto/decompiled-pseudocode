/*
 * XREFs of IopPoHandleIrp @ 0x1403D9988
 * Callers:
 *     IopfCallDriver @ 0x1403741A0 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x1403D99EC (PoHandleIrp.c)
 *     IopPowerDispatch @ 0x1403D9C00 (IopPowerDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( (unsigned __int8)PoHandleIrp(a1) )
    return 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD))DeviceObject->DriverObject->MajorFunction[CurrentStackLocation->MajorFunction] == IopPowerDispatch )
    return IopPowerDispatch(DeviceObject, a1);
  else
    return guard_dispatch_icall_no_overrides(DeviceObject, a1, v2, v3);
}
