/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1401475E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1400C8248 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_14011D0E8, 0);
  if ( dword_14011C950 )
    ndisCmCleanupSessionState();
}
