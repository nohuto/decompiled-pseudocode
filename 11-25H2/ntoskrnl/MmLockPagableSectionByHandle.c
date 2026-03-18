/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140A4B850
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402FDBBC (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x14036D0F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     IopLiveDumpCapture @ 0x1405967B4 (IopLiveDumpCapture.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x140627930 (DifMmLockPagableSectionByHandleWrapper.c)
 *     PnprLockPagesForReplace @ 0x140723EA0 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407405E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B5E130 (IoUnregisterShutdownNotification.c)
 *     KiInitializeMTRR @ 0x140C1873C (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockPagableImageSection @ 0x14036E040 (MiLockPagableImageSection.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( ImageSectionHandle != (PVOID)1 )
  {
    v4 = 0;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)ImageSectionHandle) )
    {
      v2 = MiLockLoadedDataTableEntryIfNecessary((__int64)ImageSectionHandle, &v4);
      v3 = v2;
      if ( !v2 )
        KeBugCheckEx(0x1Au, 0x1012uLL, (ULONG_PTR)ImageSectionHandle, 1uLL, 0LL);
      MiLockPagableImageSection(v2, (unsigned __int64)ImageSectionHandle, 1u);
      if ( v4 )
        MmUnlockLoadedDataTableEntry(v3);
    }
  }
}
