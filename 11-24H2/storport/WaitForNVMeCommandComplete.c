/*
 * XREFs of WaitForNVMeCommandComplete @ 0x1400BFF04
 * Callers:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 * Callees:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall WaitForNVMeCommandComplete(void *a1)
{
  return WaitForNVMeCommandCompleteWithCustomTimeout(a1);
}
