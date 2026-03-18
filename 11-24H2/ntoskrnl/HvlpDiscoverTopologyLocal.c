/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14070F0EC
 * Callers:
 *     HvlEnlightenProcessor @ 0x1404D33C4 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140583AD8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14070F104 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
