/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x140538D8C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B5F660 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
