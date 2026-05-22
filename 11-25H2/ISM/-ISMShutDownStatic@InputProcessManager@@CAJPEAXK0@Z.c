/*
 * XREFs of ?ISMShutDownStatic@InputProcessManager@@CAJPEAXK0@Z @ 0x180193BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x180193A58 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 */

__int64 __fastcall InputProcessManager::ISMShutDownStatic(InputProcessManager *a1, int a2, void *a3)
{
  if ( !a2 )
    InputProcessManager::ISMShutDown(a1);
  return 0LL;
}
