/*
 * XREFs of CarInitLogging @ 0x14060A0E0
 * Callers:
 *     CarInit @ 0x14060AA2C (CarInit.c)
 *     CarReportUnusualShutdown @ 0x14060B54C (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x140609A04 (CarEtwRegister.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14060D658 (CarWriteEarlyRuleViolationEvents.c)
 *     DifiDbgPrint @ 0x14060D7E4 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( CarLogInitialized )
    return 0LL;
  if ( !dword_140E08F20 || !tlgKeywordOn((__int64)&dword_140E08F20, 0x800000000000LL) )
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
