/*
 * XREFs of KiVerifyXcpt15 @ 0x140BCDC40
 * Callers:
 *     <none>
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     RtlCaptureImageExceptionValues @ 0x14040FE48 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _local_unwind @ 0x1404FB6F0 (_local_unwind.c)
 *     KdDisableDebugger @ 0x1405ABF70 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405AC0B0 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140BCDBD4 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140C19860 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C4AC30 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[34]; // [rsp+0h] [rbp-158h] BYREF

  v0[25] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140BCDC64);
}
