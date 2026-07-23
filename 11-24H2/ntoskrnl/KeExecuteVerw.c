/*
 * XREFs of KeExecuteVerw @ 0x1406C09C0
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404E1440 (PpmIdleDefaultExecute.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0B02Ah }
}
