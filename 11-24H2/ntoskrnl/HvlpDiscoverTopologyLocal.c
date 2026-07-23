/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x14070CC7C
 * Callers:
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14070CC94 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
