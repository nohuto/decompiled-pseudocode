/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140C26BD0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     VslConnectSwInterrupt @ 0x140C650B0 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags(0LL) & 0x500) != 0;
}
