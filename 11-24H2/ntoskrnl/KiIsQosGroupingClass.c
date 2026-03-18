/*
 * XREFs of KiIsQosGroupingClass @ 0x14029E7C0
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x14029E340 (PpmPerfArbitratorApplyProcessorState.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return ((a1 - 1) & 0xFFFFFFFA) == 0;
}
