/*
 * XREFs of CarCleanup @ 0x140614ABC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140613054 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x140615ACC (CarReportUnusualShutdown.c)
 * Callees:
 *     KeDeregisterBugCheckReasonCallback @ 0x14049BE80 (KeDeregisterBugCheckReasonCallback.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140604C20 (McGenEventUnregister_EtwUnregister.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
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
      v1 = qword_140E09090;
      qword_140E09090 = 0LL;
      dword_140E09070 = 0;
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
