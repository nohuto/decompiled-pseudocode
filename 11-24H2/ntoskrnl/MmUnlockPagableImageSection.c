/*
 * XREFs of MmUnlockPagableImageSection @ 0x1402BBBB0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404A8B80 (HalpPowerStateCallback.c)
 *     IopLiveDumpCapture @ 0x140596E48 (IopLiveDumpCapture.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x140633110 (DifMmUnlockPagableImageSectionWrapper.c)
 *     PnprUnlockPagesForReplace @ 0x14072E73C (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140B4E560 (HalpPowerInitSystem.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140B6B8CC (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B6EAB0 (IoUnregisterShutdownNotification.c)
 *     VfClearDifWithoutReboot @ 0x140B85890 (VfClearDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB6910 (BgkpUnlockBgfxCodeSection.c)
 *     KiInitializeMTRR @ 0x140C2B8EC (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
 *     MiLockPagableImageSection @ 0x1402BBC20 (MiLockPagableImageSection.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
