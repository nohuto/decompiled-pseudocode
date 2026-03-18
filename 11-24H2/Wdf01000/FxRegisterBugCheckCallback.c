/*
 * XREFs of FxRegisterBugCheckCallback @ 0x14006C8E4
 * Callers:
 *     FxInitialize @ 0x14006BF58 (FxInitialize.c)
 * Callees:
 *     FxpGetImageBase @ 0x14006C9A4 (FxpGetImageBase.c)
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400AB890 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegisterBugCheckCallback(_FX_DRIVER_GLOBALS *FxDriverGlobals, _DRIVER_OBJECT *DriverObject)
{
  unsigned __int8 FxTrackDriverForMiniDumpLog; // si
  _KBUGCHECK_REASON_CALLBACK_RECORD *p_BugCheckCallbackRecord; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx

  FxTrackDriverForMiniDumpLog = FxDriverGlobals->FxTrackDriverForMiniDumpLog;
  p_BugCheckCallbackRecord = &FxDriverGlobals->BugCheckCallbackRecord;
  FxDriverGlobals->FxTrackDriverForMiniDumpLog = 0;
  FxDriverGlobals->BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxDriverGlobals->BugCheckCallbackRecord.Checksum = 0LL;
  FxDriverGlobals->ImageAddress = 0LL;
  FxDriverGlobals->ImageSize = 0;
  if ( FxpGetImageBase(DriverObject, &FxDriverGlobals->ImageAddress, &FxDriverGlobals->ImageSize) >= 0 && !unk_1400C8091 )
  {
    if ( FxTrackDriverForMiniDumpLog )
    {
      if ( _FX_DRIVER_TRACKER_CACHE_AWARE::Register((_FX_DRIVER_TRACKER_CACHE_AWARE *)&unk_1400C8070, v5) >= 0 )
        FxDriverGlobals->FxTrackDriverForMiniDumpLog = 1;
    }
    p_BugCheckCallbackRecord->State = 0;
    KeRegisterBugCheckReasonCallback(
      p_BugCheckCallbackRecord,
      FxpBugCheckCallback,
      KbCallbackSecondaryDumpData,
      (PUCHAR)FxDriverGlobals->Public.DriverName);
  }
}
