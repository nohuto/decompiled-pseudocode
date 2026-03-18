/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14070320C
 * Callers:
 *     HvlEnlightenProcessor @ 0x1404D3598 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140580328 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x140703224 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
