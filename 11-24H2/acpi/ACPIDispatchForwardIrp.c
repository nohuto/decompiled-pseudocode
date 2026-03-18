/*
 * XREFs of ACPIDispatchForwardIrp @ 0x14001DF70
 * Callers:
 *     ACPIDispatchForwardIrpWithExceptions @ 0x140046050 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIDispatchWmiLog @ 0x14006A340 (ACPIDispatchWmiLog.c)
 *     ACPIEcOtherIrpDispatch @ 0x14009C670 (ACPIEcOtherIrpDispatch.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1400AD4A0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1400B0340 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B0590 (ACPIFilterIrpQueryInterface.c)
 *     ACPIThermalWmi @ 0x1400BA6C0 (ACPIThermalWmi.c)
 *     ACPIFilterIrpQueryId @ 0x1400BCBE0 (ACPIFilterIrpQueryId.c)
 * Callees:
 *     _ACPIInternalErrorEx @ 0x14001C1A0 (_ACPIInternalErrorEx.c)
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    ACPIInternalErrorEx(0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 776) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
