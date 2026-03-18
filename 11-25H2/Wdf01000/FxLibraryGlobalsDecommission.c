/*
 * XREFs of FxLibraryGlobalsDecommission @ 0x14009610C
 * Callers:
 *     FxLibraryCommonDecommission @ 0x14008E6F4 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxLibraryGlobalsDecommission()
{
  if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
  {
    ExFreePoolWithTag(FxLibraryGlobals.DriverTracker.m_PoolToFree, 0);
    FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  }
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_Number = 0;
  if ( FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&FxLibraryGlobals.BugCheckCallbackRecord);
    FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
    if ( FxLibraryGlobals.BugCheckDriverInfo )
    {
      FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
      FxLibraryGlobals.BugCheckDriverInfoCount = 0;
      ExFreePoolWithTag(FxLibraryGlobals.BugCheckDriverInfo, 0);
      FxLibraryGlobals.BugCheckDriverInfo = 0LL;
    }
  }
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 0;
}
