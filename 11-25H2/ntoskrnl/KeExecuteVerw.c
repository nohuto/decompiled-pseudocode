/*
 * XREFs of KeExecuteVerw @ 0x1406B47C0
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404E9280 (PpmIdleDefaultExecute.c)
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:0B02Ah }
}
