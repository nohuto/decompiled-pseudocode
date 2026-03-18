/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x14024D038
 * Callers:
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1409D9E20 (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
