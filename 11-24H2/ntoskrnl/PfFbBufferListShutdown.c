/*
 * XREFs of PfFbBufferListShutdown @ 0x1405CA3BC
 * Callers:
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
