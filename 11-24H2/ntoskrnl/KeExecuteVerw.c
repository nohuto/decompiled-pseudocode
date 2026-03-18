/*
 * XREFs of KeExecuteVerw @ 0x1406BFAC0
 * Callers:
 *     PoIdle @ 0x140449020 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404EA4C0 (PpmIdleDefaultExecute.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0B02Ah }
}
