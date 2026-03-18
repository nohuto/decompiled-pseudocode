/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140455F80
 * Callers:
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     ExpQueryNumaProcessorMap @ 0x140A46044 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140A8DF10 (IoGetDeviceNumaNode.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
