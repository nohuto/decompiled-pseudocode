/*
 * XREFs of HalpAcpiMarkHiberPhase @ 0x14053D61C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall HalpAcpiMarkHiberPhase(void *a1)
{
  if ( HalpAcpiPrmFwHandlerCount )
    PoSetHiberRange(
      a1,
      0x10000u,
      HalpAcpiPrmFwHandlerBlock,
      24LL * (unsigned int)HalpAcpiPrmFwHandlerCount,
      0x416C6148u);
}
