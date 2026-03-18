/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x14007DA14
 * Callers:
 *     FxDestroy @ 0x140081CD8 (FxDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUnregisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rbx
  unsigned int i; // ecx
  _FX_DRIVER_GLOBALS **v4; // rdx

  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  if ( FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&FxDriverGlobals->BugCheckCallbackRecord);
    p_BugCheckCallbackRecord->CallbackRoutine = 0LL;
    if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    {
      if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
      {
        for ( i = 0; i < FxLibraryGlobals.DriverTracker.m_Number; ++i )
        {
          v4 = (_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                     + FxLibraryGlobals.DriverTracker.m_EntrySize * i);
          if ( *v4 == FxDriverGlobals )
            *v4 = 0LL;
        }
      }
    }
  }
}
