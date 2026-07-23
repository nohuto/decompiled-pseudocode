/*
 * XREFs of HvlGetVpSintMessagePage @ 0x1405807A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140440D30 (HvlGetLpIndexFromProcessorIndex.c)
 */

__int64 __fastcall HvlGetVpSintMessagePage(unsigned int a1)
{
  unsigned int LpIndexFromProcessorIndex; // eax

  LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
  return *((_QWORD *)HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 4);
}
