/*
 * XREFs of PsmCrmCleanup @ 0x180077850
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 */

__int64 PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
