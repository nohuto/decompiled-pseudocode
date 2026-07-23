/*
 * XREFs of MmGetSystemPageCounts @ 0x14048F778
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall MmGetSystemPageCounts(_OWORD *a1)
{
  *a1 = xmmword_140E2D9A8;
}
