/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140C38E68
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140C38F00 (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitKernelModeSpecialMachineFrameEntries()
{
  return RtlpInitMachineFrameEntries(&RtlpNoShadowStackUnwindMachineFrameEntries, 3LL);
}
