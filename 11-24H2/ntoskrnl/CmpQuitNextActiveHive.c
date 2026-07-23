/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A67B14
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140666910 (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
