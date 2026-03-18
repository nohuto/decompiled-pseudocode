/*
 * XREFs of MiGetProcessorDomain @ 0x1404DAD6C
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407EF6CC (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 36408);
}
