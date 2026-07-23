/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x140538D7C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B705C0 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
