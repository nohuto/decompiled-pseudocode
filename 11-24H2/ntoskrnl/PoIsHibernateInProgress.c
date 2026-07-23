/*
 * XREFs of PoIsHibernateInProgress @ 0x140425540
 * Callers:
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

bool PoIsHibernateInProgress()
{
  return PopHibernateInProgress != 0;
}
