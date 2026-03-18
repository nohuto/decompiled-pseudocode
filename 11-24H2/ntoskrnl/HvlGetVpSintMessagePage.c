/*
 * XREFs of HvlGetVpSintMessagePage @ 0x140583420
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1404485D0 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140448610 (HvlGetLpIndexFromProcessorIndex.c)
 */

__int64 __fastcall HvlGetVpSintMessagePage(unsigned int a1)
{
  unsigned int LpIndexFromProcessorIndex; // eax

  LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
  return *((_QWORD *)HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 4);
}
