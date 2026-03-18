/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140C15B40
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags(0LL) & 0x500) != 0;
}
