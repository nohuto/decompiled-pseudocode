/*
 * XREFs of BvgaAcquireLock @ 0x14058D4C0
 * Callers:
 *     BvgaBitBlt @ 0x14058D530 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14058D5B0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14058D620 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14058D740 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14058D990 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14058DA50 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x1404087F0 (KeTestSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
