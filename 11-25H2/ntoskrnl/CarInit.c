/*
 * XREFs of CarInit @ 0x14060AA2C
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140608AD4 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x14060B54C (CarReportUnusualShutdown.c)
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 *     CarLoadFromDV @ 0x14060D954 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x14060D9A8 (CarReadRegistry.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 CarInit()
{
  _RTL_AVL_TABLE *Pool2; // rax
  _RTL_AVL_TABLE *v2; // rbx
  __int64 v3; // rcx

  if ( CarInitialized )
    return 0LL;
  Pool2 = (_RTL_AVL_TABLE *)ExAllocatePool2(0x40uLL);
  CarDb = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, sizeof(_RTL_AVL_TABLE));
    v2->BalancedRoot.Parent = &v2->BalancedRoot;
    v2->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CarComparRuleViolation;
    v2->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))CarAllocDbNode;
    v2->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))&CarFreeDbNode;
    _InterlockedExchange(&CarDbInitialized, 1);
    qword_140F035E8 = (__int64)&CarConfigurationEntries;
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
    dword_140F01C2C = CarTipTag;
    dword_140F01C30 = CarTriageContext;
    dword_140F01C28 = (unsigned __int16)NtBuildNumber;
    CarViolationSnapshot = 1;
    dword_140F01C04 = 128;
    qword_140F01C34 = CarRuleClasses;
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
