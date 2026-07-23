/*
 * XREFs of IoSynchronousCallDriver @ 0x14025D510
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BA10 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BAB0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquirePowerLimitInterface @ 0x1407492F0 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x14074A2D0 (PopAcquireCoolingInterface.c)
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopBatteryQueryStatus @ 0x1407594B4 (PopBatteryQueryStatus.c)
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x14075A84C (PopPowerAdapterQueryStatus.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     IoForwardIrpSynchronously @ 0x140A31C60 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140A54590 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140A5E3A0 (FsRtlMdlReadEx.c)
 *     PopBatteryQueryEstimatedTime @ 0x140A7CB50 (PopBatteryQueryEstimatedTime.c)
 *     WmipGetFilePDO @ 0x140A93DA4 (WmipGetFilePDO.c)
 *     PopBatteryReadTag @ 0x140AA8E2C (PopBatteryReadTag.c)
 *     PopBatteryInitialize @ 0x140AC5B8C (PopBatteryInitialize.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
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
