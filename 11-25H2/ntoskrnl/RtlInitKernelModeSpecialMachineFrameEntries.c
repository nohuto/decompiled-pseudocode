/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140C25A58
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140C25AF0 (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitKernelModeSpecialMachineFrameEntries()
{
  return RtlpInitMachineFrameEntries(&RtlpNoShadowStackUnwindMachineFrameEntries, 3LL);
}
