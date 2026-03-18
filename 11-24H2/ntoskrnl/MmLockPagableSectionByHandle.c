/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140A3FE90
 * Callers:
 *     PoRunDownDeviceObject @ 0x1403F1C6C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404AE270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     IopLiveDumpCapture @ 0x140599EC4 (IopLiveDumpCapture.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1406338F0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     PnprLockPagesForReplace @ 0x14072FE20 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockPagableImageSection @ 0x1402C70A0 (MiLockPagableImageSection.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
