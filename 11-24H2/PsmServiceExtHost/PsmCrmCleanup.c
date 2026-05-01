/*
 * XREFs of PsmCrmCleanup @ 0x1800778B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x1800786E8 (CrmGlobalsCleanup.c)
 */

__int64 PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
