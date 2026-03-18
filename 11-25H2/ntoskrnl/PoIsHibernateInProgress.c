/*
 * XREFs of PoIsHibernateInProgress @ 0x14044CA60
 * Callers:
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

bool PoIsHibernateInProgress()
{
  return PopHibernateInProgress != 0;
}
