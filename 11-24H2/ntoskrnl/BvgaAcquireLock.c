/*
 * XREFs of BvgaAcquireLock @ 0x1405904A0
 * Callers:
 *     BvgaBitBlt @ 0x140590510 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x140590590 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140590600 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140590720 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140590970 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140590A30 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140418A40 (KeTestSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
