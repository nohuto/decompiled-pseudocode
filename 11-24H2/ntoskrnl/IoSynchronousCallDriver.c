/*
 * XREFs of IoSynchronousCallDriver @ 0x140374C50
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057F7E0 (FsRtlGetFileExtents.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DE70 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070DF10 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquirePowerLimitInterface @ 0x14074AFC0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074BFA0 (PopAcquireCoolingInterface.c)
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopBatteryQueryStatus @ 0x14075ADC4 (PopBatteryQueryStatus.c)
 *     PopPowerAdapterAdd @ 0x14075B550 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14075BB40 (PopPowerAdapterQueryStatus.c)
 *     IoForwardIrpSynchronously @ 0x140A3C480 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5CD70 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A65BD0 (FsRtlMdlReadEx.c)
 *     PopBatteryInitialize @ 0x140A6AF9C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140A81F70 (PopBatteryQueryEstimatedTime.c)
 *     WmipGetFilePDO @ 0x140A97574 (WmipGetFilePDO.c)
 *     PopBatteryReadTag @ 0x140AADDAC (PopBatteryReadTag.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
