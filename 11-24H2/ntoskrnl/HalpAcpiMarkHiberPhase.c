/*
 * XREFs of HalpAcpiMarkHiberPhase @ 0x14053AF1C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B705C0 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
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
