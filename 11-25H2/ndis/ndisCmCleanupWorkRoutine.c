/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1401522A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1400CF358 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_140127194, 0);
  if ( dword_140126990 )
    ndisCmCleanupSessionState();
}
