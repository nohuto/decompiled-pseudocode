/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x14008E1F8
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E518 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  *(_DWORD *)&WPP_GLOBAL_WDF_Control.SectorSize = 104;
  *(_DWORD *)(&WPP_GLOBAL_WDF_Control.Spare1 + 1) = 8;
  WPP_GLOBAL_WDF_Control.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)0x200000000ALL;
  *(_QWORD *)&WdfContextTriageInfo.NextHeader = 8LL;
  WdfContextTriageInfo.Context = 48;
  *((_DWORD *)&WPP_GLOBAL_WDF_Control.Reserved + 2) = 64;
  WdfContextTriageInfo.HeaderSize = 64;
  WdfContextTriageInfo.TypeInfoPtr = 32;
  WPP_GLOBAL_WDF_Control.SecurityDescriptor = (void *)0x1000000028LL;
  WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink = (_LIST_ENTRY *)0x3800000028LL;
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = 40LL;
  *((_DWORD *)&WPP_GLOBAL_WDF_Control.Dpc.0 + 1) = 120;
  WPP_GLOBAL_WDF_Control.Reserved = (void *)0x1000000048LL;
  WPP_GLOBAL_WDF_Control.DeviceLock.Header.LockNV = 8;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredContext = (void *)0xC0000003A8LL;
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1 = (void *)0x110000000E8LL;
  WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2 = (void *)0x8000000120LL;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DpcData) = 352;
  LODWORD(WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Blink) = 72;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))0x90000000A8LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.Lock = 0x7800000168LL;
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)0x12000000098LL;
  WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = 304;
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) = 320;
  WPP_GLOBAL_WDF_Control.ActiveThreadCount = 944;
  *(&WPP_GLOBAL_WDF_Control.ActiveThreadCount + 1) = 136;
  WdfIrpTriageInfo = (_WDFIRP_TRIAGE_INFO)8LL;
}
