/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140C36D28
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140C36DC0 (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitKernelModeSpecialMachineFrameEntries()
{
  return RtlpInitMachineFrameEntries(&RtlpNoShadowStackUnwindMachineFrameEntries, 3LL);
}
