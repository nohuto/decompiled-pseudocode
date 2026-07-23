/*
 * XREFs of HalpCheckAndReportGhes @ 0x14049A84C
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x14049A7E0 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x140541490 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x1405520B0 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x140B4FC94 (HalpGenInitialRead.c)
 * Callees:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     HalpReadGenericErrorInfo @ 0x14049A8A8 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x14055217C (HalpSignalRAS.c)
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
