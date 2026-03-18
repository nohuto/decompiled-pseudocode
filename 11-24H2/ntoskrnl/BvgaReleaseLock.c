/*
 * XREFs of BvgaReleaseLock @ 0x140590790
 * Callers:
 *     BvgaBitBlt @ 0x140590510 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x140590590 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140590600 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140590720 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140590970 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140590A30 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
