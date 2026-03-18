/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x14055A1B0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x14065DBB0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
