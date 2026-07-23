/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x140557DE0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x14065C2D0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
