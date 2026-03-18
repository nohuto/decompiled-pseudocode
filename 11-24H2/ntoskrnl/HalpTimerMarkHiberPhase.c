/*
 * XREFs of HalpTimerMarkHiberPhase @ 0x14053B53C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall HalpTimerMarkHiberPhase(__int64 a1)
{
  if ( !a1 )
  {
    if ( HalpTimerReferencePage )
      PoSetHiberRange(0LL, 0x10000u, HalpTimerReferencePage, 0x1000uLL, 0x636C6168u);
  }
}
