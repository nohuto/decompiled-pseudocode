/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140C28C20
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags(0LL) & 0x500) != 0;
}
