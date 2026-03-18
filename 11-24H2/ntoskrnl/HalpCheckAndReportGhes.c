/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404A01CC
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x1404A0160 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x140543B40 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x140554770 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x140B4DC44 (HalpGenInitialRead.c)
 * Callees:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     HalpReadGenericErrorInfo @ 0x1404A0228 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x14055483C (HalpSignalRAS.c)
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
