/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140A35770
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404A8B80 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     IopLiveDumpCapture @ 0x140596E48 (IopLiveDumpCapture.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x140631EB0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     PnprLockPagesForReplace @ 0x14072DE30 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074A9E4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140B6B8CC (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B6EAB0 (IoUnregisterShutdownNotification.c)
 *     KiInitializeMTRR @ 0x140C2B8EC (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockPagableImageSection @ 0x1402BBC20 (MiLockPagableImageSection.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
