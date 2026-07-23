/*
 * XREFs of MiGetProcessorDomain @ 0x1404D3724
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407FFCC4 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 47412);
}
