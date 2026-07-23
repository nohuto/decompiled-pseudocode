/*
 * XREFs of KiGetSubNodeForGroup @ 0x1404431CC
 * Callers:
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A0FDA4 (KeBuildLogicalProcessorSystemInformation.c)
 *     KiConfigureProcessorBlock @ 0x140B57FF8 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetSubNodeForGroup(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2 + 32);
}
