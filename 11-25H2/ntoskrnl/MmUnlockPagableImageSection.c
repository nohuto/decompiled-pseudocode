/*
 * XREFs of MmUnlockPagableImageSection @ 0x14036DFD0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402FDBBC (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x14036D0F0 (HalpPowerStateCallback.c)
 *     IopLiveDumpCapture @ 0x1405967B4 (IopLiveDumpCapture.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x140628B90 (DifMmUnlockPagableImageSectionWrapper.c)
 *     PnprUnlockPagesForReplace @ 0x1407247AC (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407405E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140B3C520 (HalpPowerInitSystem.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B5E130 (IoUnregisterShutdownNotification.c)
 *     VfClearDifWithoutReboot @ 0x140B738B0 (VfClearDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BA4910 (BgkpUnlockBgfxCodeSection.c)
 *     KiInitializeMTRR @ 0x140C1873C (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     MiLockPagableImageSection @ 0x14036E040 (MiLockPagableImageSection.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  __int64 DataTableEntryByAddress; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int8 v5; // r11

  if ( ImageSectionHandle != (PVOID)1 )
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(ImageSectionHandle);
    MmUnlockLoadedModuleListShared(v5, v3, v4);
    if ( !DataTableEntryByAddress )
      KeBugCheckEx(0x1Au, 0x1012uLL, (ULONG_PTR)ImageSectionHandle, 0LL, 0LL);
    MiLockPagableImageSection(DataTableEntryByAddress, ImageSectionHandle, 0LL);
  }
}
