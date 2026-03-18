/*
 * XREFs of KiGetSubNodeForGroup @ 0x14044CA74
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A0F334 (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140B46004 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 32);
}
