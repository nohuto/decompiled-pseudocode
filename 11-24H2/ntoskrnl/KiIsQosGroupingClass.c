/*
 * XREFs of KiIsQosGroupingClass @ 0x1402AD2B0
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x1402ACE30 (PpmPerfArbitratorApplyProcessorState.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return ((a1 - 1) & 0xFFFFFFFA) == 0;
}
