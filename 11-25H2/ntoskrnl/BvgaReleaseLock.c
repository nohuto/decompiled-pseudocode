/*
 * XREFs of BvgaReleaseLock @ 0x14058CFB0
 * Callers:
 *     BvgaBitBlt @ 0x14058CD30 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14058CDB0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14058CE20 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14058CF40 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14058D190 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14058D250 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
