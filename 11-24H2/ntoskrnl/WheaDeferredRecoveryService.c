/*
 * XREFs of WheaDeferredRecoveryService @ 0x14065C2D0
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x140557DE0 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

char WheaDeferredRecoveryService()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&WheaDrsDpc, 0LL, 0LL);
  return v0;
}
