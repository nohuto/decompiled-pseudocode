/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x14008E258
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E578 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2 = (void *)0x800000068LL;
  WPP_GLOBAL_WDF_Control.Dpc.DpcData = (void *)0x200000000ALL;
  *(_LIST_ENTRY **)((char *)&WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink + 4) = (_LIST_ENTRY *)8;
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.SectorSize = 48;
  LODWORD(WPP_GLOBAL_WDF_Control.SecurityDescriptor) = 64;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink) = 64;
  HIDWORD(WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Blink) = 32;
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = 0x1000000028LL;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredContext = (void *)0x3800000028LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = 40LL;
  WPP_GLOBAL_WDF_Control.ActiveThreadCount = 72;
  *(&WPP_GLOBAL_WDF_Control.ActiveThreadCount + 1) = 16;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) = 8;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)0xC0000003A8LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.Lock = 0x110000000E8LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)0x8000000120LL;
  WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = 352;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) = 72;
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)0x90000000A8LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject = (void *)0x7800000168LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp = (void *)0x12000000098LL;
  WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc = (_KDPC *)0x7800000130LL;
  WPP_GLOBAL_WDF_Control.AlignmentRequirement = 320;
  WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)0x88000003B0LL;
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceLock.Header.Lock = 8LL;
}
