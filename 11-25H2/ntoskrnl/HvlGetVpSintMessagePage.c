/*
 * XREFs of HvlGetVpSintMessagePage @ 0x14057FC70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1403ED27C (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1403ED2C0 (HvlGetLpIndexFromProcessorIndex.c)
 */

__int64 __fastcall HvlGetVpSintMessagePage(unsigned int a1)
{
  unsigned int LpIndexFromProcessorIndex; // eax

  LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
  return *((_QWORD *)HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 4);
}
