/*
 * XREFs of KiIsKernelCfgActive @ 0x140C26C34
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
