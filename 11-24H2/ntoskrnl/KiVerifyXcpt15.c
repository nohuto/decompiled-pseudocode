/*
 * XREFs of KiVerifyXcpt15 @ 0x140BE0C40
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     RtlCaptureImageExceptionValues @ 0x1402EEB24 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402EEF90 (RtlSectionTableFromVirtualAddress.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     KdDisableDebugger @ 0x1405AC870 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405AC9B0 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140BE0BD4 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140C2CA80 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C5E140 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[34]; // [rsp+0h] [rbp-158h] BYREF

  v0[25] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140BE0C64);
}
