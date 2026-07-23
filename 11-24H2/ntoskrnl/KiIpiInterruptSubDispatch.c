/*
 * XREFs of KiIpiInterruptSubDispatch @ 0x1406B3920
 * Callers:
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiIpiInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  char result; // al

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(0xEu);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 0);
  _enable();
  result = KiIpiProcessRequests((_KTRAP_FRAME *)(v0 - 128));
  _disable();
  return result;
}
