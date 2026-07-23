/*
 * XREFs of CarInitLogging @ 0x140614660
 * Callers:
 *     CarInit @ 0x140614FAC (CarInit.c)
 *     CarReportUnusualShutdown @ 0x140615ACC (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x140613F84 (CarEtwRegister.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 *     DifiDbgPrint @ 0x140617D64 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( CarLogInitialized )
    return 0LL;
  if ( !dword_140E09070 || !tlgKeywordOn((__int64)&dword_140E09070, 0x800000000000LL) )
  {
    CarEtwRandomSeed = KeQueryPerformanceCounter(0LL).QuadPart;
    v2 = CarEtwRegister();
    v0 = v2;
    if ( v2 < 0 )
      DifiDbgPrint("CarLogging failed to initialize with %08lx\n", v2);
    CarLogInitialized = 1;
    CarWriteEarlyRuleViolationEvents();
  }
  return v0;
}
