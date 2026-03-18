/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1400AB8E4
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x140095F4C (FxLibraryGlobalsCommission.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14006DFA4 (RtlStringCopyWorkerA.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  _FX_DUMP_DRIVER_INFO_ENTRY *Pool2; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8

  FxLibraryGlobals.BugCheckDriverInfoCount = 0;
  FxLibraryGlobals.BugCheckDriverInfoIndex = 0;
  FxLibraryGlobals.BugCheckDriverInfo = 0LL;
  FxLibraryGlobals.BugCheckCallbackRecord.Entry = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&FxLibraryGlobals.BugCheckCallbackRecord.Checksum = 0LL;
  if ( !FxLibraryGlobals.StaticallyLinked )
  {
    Pool2 = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePool2(64LL, 560LL, 1917089862LL);
    FxLibraryGlobals.BugCheckDriverInfo = Pool2;
    if ( Pool2 )
    {
      FxLibraryGlobals.BugCheckDriverInfoCount = 10;
      Pool2->FxDriverGlobals = 0LL;
      FxLibraryGlobals.BugCheckDriverInfo->Version.Major = 1;
      FxLibraryGlobals.BugCheckDriverInfo->Version.Minor = 35;
      FxLibraryGlobals.BugCheckDriverInfo->Version.Build = 0;
      if ( (int)RtlStringCopyWorkerA(FxLibraryGlobals.BugCheckDriverInfo->DriverName, v1, v2, "Wdf01000") < 0 )
        FxLibraryGlobals.BugCheckDriverInfo->DriverName[0] = 0;
      ++FxLibraryGlobals.BugCheckDriverInfoIndex;
      FxLibraryGlobals.BugCheckCallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &FxLibraryGlobals.BugCheckCallbackRecord,
        FxpLibraryBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"Wdf01000");
    }
  }
}
