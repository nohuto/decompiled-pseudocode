/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x1400834B4
 * Callers:
 *     FxInitialize @ 0x14006D198 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // bp
  unsigned int v3; // r14d
  _FX_DUMP_DRIVER_INFO_ENTRY *Pool2; // rax
  _FX_DUMP_DRIVER_INFO_ENTRY *v5; // rsi
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // rbx
  _FX_DUMP_DRIVER_INFO_ENTRY *v7; // rdx
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( FxLibraryGlobals.BugCheckDriverInfo )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    if ( FxLibraryGlobals.BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoCount )
    {
      if ( FxLibraryGlobals.BugCheckDriverInfoCount > 0x23F )
        goto $Done_42;
      v3 = FxLibraryGlobals.BugCheckDriverInfoCount + 10;
      Pool2 = (_FX_DUMP_DRIVER_INFO_ENTRY *)ExAllocatePool2(
                                              64LL,
                                              56LL * (FxLibraryGlobals.BugCheckDriverInfoCount + 10),
                                              1917089862LL);
      v5 = Pool2;
      if ( !Pool2 )
        goto $Done_42;
      BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
      memmove(Pool2, FxLibraryGlobals.BugCheckDriverInfo, 56LL * FxLibraryGlobals.BugCheckDriverInfoCount);
      FxLibraryGlobals.BugCheckDriverInfo = v5;
      FxLibraryGlobals.BugCheckDriverInfoCount = v3;
      ExFreePoolWithTag(BugCheckDriverInfo, 0);
    }
    v7 = &FxLibraryGlobals.BugCheckDriverInfo[FxLibraryGlobals.BugCheckDriverInfoIndex];
    v7->FxDriverGlobals = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v7->Version.Major = *(_QWORD *)&WdfBindInfo->Version.Major;
    v7->Version.Build = WdfBindInfo->Version.Build;
    *(_OWORD *)v7->DriverName = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v7->DriverName[16] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7->DriverName[31] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = FxLibraryGlobals.BugCheckDriverInfoIndex++;
$Done_42:
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
  }
}
