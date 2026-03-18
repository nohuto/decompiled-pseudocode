/*
 * XREFs of ?GreReleaseHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3010
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001FA60 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreReleaseHmgrSemaphore(struct Gre::Base::SESSION_GLOBALS *a1)
{
  GreReleaseSemaphoreExclusive<20,>((__int64 *)a1);
}
