/*
 * XREFs of KiVerifyXcpt15 @ 0x140BDEC40
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x14027BAB0 (KeExpandKernelStackAndCallout.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     RtlCaptureImageExceptionValues @ 0x14042CAB0 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042CF10 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     MmGetMinWsPagePriority @ 0x1404790C0 (MmGetMinWsPagePriority.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _local_unwind @ 0x1404FDE70 (_local_unwind.c)
 *     KdDisableDebugger @ 0x1405AF900 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405AFA40 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140BDEBD4 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140C2A960 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140C5BFB0 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[34]; // [rsp+0h] [rbp-158h] BYREF

  v1[25] = v1;
  KiVerifyXcpt2();
  return local_unwind((int)v1, (int)&loc_140BDEC64);
}
