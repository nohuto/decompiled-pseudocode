/*
 * XREFs of HalpPciMarkHiberPhase @ 0x1404BB254
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
