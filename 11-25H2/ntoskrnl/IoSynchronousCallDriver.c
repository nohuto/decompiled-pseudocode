/*
 * XREFs of IoSynchronousCallDriver @ 0x14035DF20
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057C4C0 (FsRtlGetFileExtents.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140701F90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140702030 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquirePowerLimitInterface @ 0x14073EEF0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14073FED0 (PopAcquireCoolingInterface.c)
 *     PopBatteryAdd @ 0x14074E680 (PopBatteryAdd.c)
 *     PopPowerAdapterAdd @ 0x14074ECF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14074F2D4 (PopPowerAdapterQueryStatus.c)
 *     IoForwardIrpSynchronously @ 0x140A35A90 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A5AAF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A636B0 (FsRtlMdlReadEx.c)
 *     PopBatteryInitialize @ 0x140A68504 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140A7E8F0 (PopBatteryQueryEstimatedTime.c)
 *     WmipGetFilePDO @ 0x140A93244 (WmipGetFilePDO.c)
 *     PopBatteryReadTag @ 0x140AA89F8 (PopBatteryReadTag.c)
 *     PopBatteryQueryStatus @ 0x140AC26B4 (PopBatteryQueryStatus.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
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
