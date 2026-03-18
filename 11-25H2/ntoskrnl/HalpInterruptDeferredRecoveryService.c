/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1405578B0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x140651C20 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
