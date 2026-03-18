/*
 * XREFs of KiGetSubNodeForGroup @ 0x14044C2CC
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A16BC4 (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140B55FA8 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 32);
}
