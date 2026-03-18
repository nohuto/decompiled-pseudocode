/*
 * XREFs of PfFbBufferListShutdown @ 0x1405CCC4C
 * Callers:
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
