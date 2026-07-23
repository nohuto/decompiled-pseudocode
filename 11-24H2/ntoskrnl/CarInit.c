/*
 * XREFs of CarInit @ 0x140614FAC
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140613054 (VfVolatileSetDifRuleClass.c)
 *     CarReportUnusualShutdown @ 0x140615ACC (CarReportUnusualShutdown.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     CarInitLogging @ 0x140614660 (CarInitLogging.c)
 *     CarLoadFromDV @ 0x140617ED4 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x140617F28 (CarReadRegistry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 CarInit()
{
  _RTL_AVL_TABLE *Pool2; // rax
  _RTL_AVL_TABLE *v2; // rbx
  __int64 v3; // rcx

  if ( CarInitialized )
    return 0LL;
  Pool2 = (_RTL_AVL_TABLE *)ExAllocatePool2(0x40uLL, 0xC0uLL, 0x4E726143u);
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
    qword_140F03C78 = (__int64)&CarConfigurationEntries;
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
    dword_140F022CC = CarTipTag;
    dword_140F022D0 = CarTriageContext;
    dword_140F022C8 = (unsigned __int16)NtBuildNumber;
    CarViolationSnapshot = 1;
    dword_140F022A4 = 128;
    qword_140F022D4 = CarRuleClasses;
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
