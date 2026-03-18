/*
 * XREFs of FxUnregisterBugCheckCallback @ 0x14007D6D4
 * Callers:
 *     FxDestroy @ 0x140081CC8 (FxDestroy.c)
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
      if ( P )
      {
        for ( i = 0; i < unk_1400C8084; ++i )
        {
          v4 = (_FX_DRIVER_GLOBALS **)(unk_1400C8070 + unk_1400C8080 * i);
          if ( *v4 == FxDriverGlobals )
            *v4 = 0LL;
        }
      }
    }
  }
}
