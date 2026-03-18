/*
 * XREFs of CarCleanup @ 0x14060A53C
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140608910 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140608AD4 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x14060B54C (CarReportUnusualShutdown.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1404A1CF0 (KeDeregisterBugCheckReasonCallback.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1405FB2D8 (McGenEventUnregister_EtwUnregister.c)
 *     CarDeleteRuleViolationDB @ 0x14060D500 (CarDeleteRuleViolationDB.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

unsigned __int64 CarCleanup()
{
  unsigned __int64 result; // rax
  REGHANDLE v1; // rcx

  result = (unsigned int)CarInitialized;
  if ( CarInitialized )
  {
    CarDeleteRuleViolationDB();
    if ( CarLogInitialized )
    {
      v1 = qword_140E08F40;
      qword_140E08F40 = 0LL;
      dword_140E08F20 = 0;
      EtwUnregister(v1);
      CarLogInitialized = 0;
      McGenEventUnregister_EtwUnregister();
    }
    KeDeregisterBugCheckReasonCallback(&CarBugCheckCallback);
    CarBugCheckCallback.CallbackRoutine = 0LL;
    result = (unsigned __int64)memset_0(&CarViolationSnapshot, 0, 0x80uLL);
    _InterlockedExchange(&CarInitialized, 0);
  }
  return result;
}
