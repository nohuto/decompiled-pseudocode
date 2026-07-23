/*
 * XREFs of BvgaReleaseLock @ 0x14058D7B0
 * Callers:
 *     BvgaBitBlt @ 0x14058D530 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14058D5B0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14058D620 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14058D740 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14058D990 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14058DA50 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 BvgaReleaseLock()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax

  v0 = (unsigned __int8)BvgaOldIrql;
  result = KxReleaseSpinLock((volatile signed __int64 *)&BootDriverLock);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v0);
    __writecr8(v0);
  }
  return result;
}
