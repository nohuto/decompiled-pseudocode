/*
 * XREFs of MmGetSystemPageCounts @ 0x140494EB8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140E2D868;
}
