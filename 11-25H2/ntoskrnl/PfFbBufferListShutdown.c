/*
 * XREFs of PfFbBufferListShutdown @ 0x1405C867C
 * Callers:
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
