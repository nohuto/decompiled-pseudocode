/*
 * XREFs of PspIoRateEntryDeactivate @ 0x14085A670
 * Callers:
 *     PspSetJobIoRateControl @ 0x14085A388 (PspSetJobIoRateControl.c)
 *     PspJobIoRateControlDisable @ 0x140A56A68 (PspJobIoRateControlDisable.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControlForVolume @ 0x140AB24C8 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402BA89C (IoStopDiskIoAttributionForContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     IoStopIoRateControl @ 0x140398DFC (IoStopIoRateControl.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
