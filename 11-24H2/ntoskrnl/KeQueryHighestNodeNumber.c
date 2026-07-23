/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14044AED0
 * Callers:
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     ExpQueryNumaProcessorMap @ 0x140A40CE0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140A8F1B0 (IoGetDeviceNumaNode.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
