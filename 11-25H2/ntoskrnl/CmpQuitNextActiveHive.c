/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A6C1AC
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14065C630 (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
