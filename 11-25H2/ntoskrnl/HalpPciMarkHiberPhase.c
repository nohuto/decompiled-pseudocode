/*
 * XREFs of HalpPciMarkHiberPhase @ 0x140472224
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B5F660 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
