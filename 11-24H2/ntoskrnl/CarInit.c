/*
 * XREFs of CarInit @ 0x1406169EC
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140614A94 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x14061750C (CarReportUnusualShutdown.c)
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 *     CarInitLogging @ 0x1406160A0 (CarInitLogging.c)
 *     CarLoadFromDV @ 0x140619914 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x140619968 (CarReadRegistry.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 CarInit()
{
  RTL_AVL_TABLE *Pool2; // rax
  RTL_AVL_TABLE *v2; // rbx
  __int64 v3; // rcx

  if ( CarInitialized )
    return 0LL;
  Pool2 = (RTL_AVL_TABLE *)ExAllocatePool2(0x40uLL);
  CarDb = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, sizeof(RTL_AVL_TABLE));
    v2->BalancedRoot.Parent = &v2->BalancedRoot;
    v2->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CarComparRuleViolation;
    v2->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))CarAllocDbNode;
    v2->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))&CarFreeDbNode;
    _InterlockedExchange(&CarDbInitialized, 1);
    qword_140F03998 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    memset_0(CarDrivers, 0, sizeof(CarDrivers));
    CarTipTag = 0;
    CarXdvOptions = 0;
    CarRuleClasses = 0LL;
    CarTriageContext = 1;
    if ( (_DWORD)InitializationPhase )
    {
      LOBYTE(v3) = 1;
      CarLoadFromDV(v3);
      CarReadRegistry();
    }
    else
    {
      CarLoadFromDV(0LL);
    }
    dword_140F01FEC = CarTipTag;
    dword_140F01FF0 = CarTriageContext;
    dword_140F01FE8 = (unsigned __int16)NtBuildNumber;
    CarViolationSnapshot = 1;
    dword_140F01FC4 = 128;
    qword_140F01FF4 = CarRuleClasses;
    CarBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &CarBugCheckCallback,
      CarpSecondaryDataCallback,
      KbCallbackSecondaryDumpData,
      &CarComponentName);
    if ( DifIsVolatileMode )
      CarInitLogging();
    CarInitialized = 1;
    return 0LL;
  }
  return 3221225495LL;
}
