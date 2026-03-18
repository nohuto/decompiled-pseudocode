/*
 * XREFs of PoIsHibernateInProgress @ 0x140433400
 * Callers:
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 * Callees:
 *     <none>
 */

bool PoIsHibernateInProgress()
{
  return PopHibernateInProgress != 0;
}
