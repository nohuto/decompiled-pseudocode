/*
 * XREFs of EtwpIsSingleStreamLogger @ 0x1403E4814
 * Callers:
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140990F70 (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsSingleStreamLogger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 12) & 0x10000000) != 0;
}
