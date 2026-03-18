/*
 * XREFs of BvgaAcquireLock @ 0x14058CCC0
 * Callers:
 *     BvgaBitBlt @ 0x14058CD30 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14058CDB0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14058CE20 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14058CF40 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14058D190 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14058D250 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x14041D2F0 (KeTestSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  int v1; // edx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( !KeTestSpinLock(&BootDriverLock) )
      ;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v1);
    }
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
