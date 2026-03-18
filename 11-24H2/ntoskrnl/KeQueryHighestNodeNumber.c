/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140456190
 * Callers:
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     ExpQueryNumaProcessorMap @ 0x140A49FC0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140A92A00 (IoGetDeviceNumaNode.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
