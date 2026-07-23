/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x14027D648
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D4930 (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
