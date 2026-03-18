/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404A0ACC
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x1404A0A60 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x140541310 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x140551E70 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x140B3DC44 (HalpGenInitialRead.c)
 * Callees:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     HalpReadGenericErrorInfo @ 0x1404A0B28 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x140551F3C (HalpSignalRAS.c)
 */

char __fastcall HalpCheckAndReportGhes(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( (int)HalpReadGenericErrorInfo() >= 0 )
  {
    PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
    if ( *(_DWORD *)(a1 + 96) == 12 )
      HalpSignalRAS(a1);
    WheaReportHwError(*(_QWORD *)(a1 + 24));
    return 1;
  }
  return v2;
}
