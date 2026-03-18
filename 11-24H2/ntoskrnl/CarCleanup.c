/*
 * XREFs of CarCleanup @ 0x1406164FC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140614A94 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x14061750C (CarReportUnusualShutdown.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x1404A1620 (KeDeregisterBugCheckReasonCallback.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140607618 (McGenEventUnregister_EtwUnregister.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
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
      v1 = qword_140E09020;
      qword_140E09020 = 0LL;
      dword_140E09000 = 0;
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
