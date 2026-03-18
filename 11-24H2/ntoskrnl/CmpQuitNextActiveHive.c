/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A6E614
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140668020 (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
