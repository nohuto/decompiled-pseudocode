/*
 * XREFs of KiIsKernelCfgActive @ 0x140C15BA4
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL) >> 7) & 1;
}
