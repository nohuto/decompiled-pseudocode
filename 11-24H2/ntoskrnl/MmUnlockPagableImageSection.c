/*
 * XREFs of MmUnlockPagableImageSection @ 0x1402C7030
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403F1C6C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404AE270 (HalpPowerStateCallback.c)
 *     IopLiveDumpCapture @ 0x140599EC4 (IopLiveDumpCapture.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x140634B50 (DifMmUnlockPagableImageSectionWrapper.c)
 *     PnprUnlockPagesForReplace @ 0x14073072C (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140B4C520 (HalpPowerInitSystem.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     VfClearDifWithoutReboot @ 0x140B83890 (VfClearDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB4910 (BgkpUnlockBgfxCodeSection.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 *     MiLockPagableImageSection @ 0x1402C70A0 (MiLockPagableImageSection.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  __int64 DataTableEntryByAddress; // rdi
  unsigned __int8 v3; // r11

  if ( ImageSectionHandle != (PVOID)1 )
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(ImageSectionHandle);
    MmUnlockLoadedModuleListShared(v3);
    if ( !DataTableEntryByAddress )
      KeBugCheckEx(0x1Au, 0x1012uLL, (ULONG_PTR)ImageSectionHandle, 0LL, 0LL);
    MiLockPagableImageSection(DataTableEntryByAddress, ImageSectionHandle, 0LL);
  }
}
