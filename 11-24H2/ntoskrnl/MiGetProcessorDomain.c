/*
 * XREFs of MiGetProcessorDomain @ 0x1404D9CA8
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1407FF580 (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 47412);
}
