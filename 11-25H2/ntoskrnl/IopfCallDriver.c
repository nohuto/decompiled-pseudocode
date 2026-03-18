/*
 * XREFs of IopfCallDriver @ 0x14035C150
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x14049FA00 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B72908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B72950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IopPoHandleIrp @ 0x140356BE4 (IopPoHandleIrp.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PiDaDispatch @ 0x1409FE5F0 (PiDaDispatch.c)
 */

NTSTATUS __fastcall IopfCallDriver(PDEVICE_OBJECT DeviceObject, IRP *BugCheckParameter1)
{
  struct _IO_STACK_LOCATION *v4; // rcx
  __int64 MajorFunction; // rdx
  NTSTATUS (__stdcall *v6)(PDEVICE_OBJECT, PIRP); // r9

  if ( --BugCheckParameter1->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)BugCheckParameter1, 0LL, 0LL, 0LL);
  v4 = BugCheckParameter1->Tail.Overlay.CurrentStackLocation - 1;
  BugCheckParameter1->Tail.Overlay.CurrentStackLocation = v4;
  v4->DeviceObject = DeviceObject;
  MajorFunction = v4->MajorFunction;
  if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v4->MinorFunction - 2) <= 1u )
    return IopPoHandleIrp(BugCheckParameter1);
  v6 = DeviceObject->DriverObject->MajorFunction[MajorFunction];
  if ( (char *)v6 == (char *)&IopInvalidDeviceRequest )
  {
    BugCheckParameter1->IoStatus.Status = -1073741808;
    IofCompleteRequest(BugCheckParameter1, 0);
    return -1073741808;
  }
  else if ( (char *)v6 == (char *)PiDaDispatch )
  {
    return PiDaDispatch(DeviceObject, BugCheckParameter1);
  }
  else if ( v6 == IofCallDriver )
  {
    return IofCallDriver(DeviceObject, BugCheckParameter1);
  }
  else
  {
    return guard_dispatch_icall_no_overrides(DeviceObject, BugCheckParameter1);
  }
}
