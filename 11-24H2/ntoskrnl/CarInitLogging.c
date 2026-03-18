/*
 * XREFs of CarInitLogging @ 0x1406160A0
 * Callers:
 *     CarInit @ 0x1406169EC (CarInit.c)
 *     CarReportUnusualShutdown @ 0x14061750C (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x1406159C4 (CarEtwRegister.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140619618 (CarWriteEarlyRuleViolationEvents.c)
 *     DifiDbgPrint @ 0x1406197A4 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( CarLogInitialized )
    return 0LL;
  if ( !dword_140E09000 || !tlgKeywordOn((__int64)&dword_140E09000, 0x800000000000LL) )
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
