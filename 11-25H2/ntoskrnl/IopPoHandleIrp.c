/*
 * XREFs of IopPoHandleIrp @ 0x140356BE4
 * Callers:
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140356C48 (PoHandleIrp.c)
 *     IopPowerDispatch @ 0x140356E60 (IopPowerDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PDEVICE_OBJECT DeviceObject; // rcx

  if ( (unsigned __int8)PoHandleIrp(a1) )
    return 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD))DeviceObject->DriverObject->MajorFunction[CurrentStackLocation->MajorFunction] == IopPowerDispatch )
    return IopPowerDispatch(DeviceObject, a1);
  else
    return guard_dispatch_icall_no_overrides(DeviceObject, a1);
}
