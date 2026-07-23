/*
 * XREFs of EtwpBuffersFlushRequired @ 0x14027D9C4
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(__int64 a1)
{
  int UsedProcessorCount; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( !*(_DWORD *)(a1 + 212) )
    return 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, a1);
  return *(_DWORD *)(v3 + 232) - UsedProcessorCount - *(_DWORD *)(v4 + 228) >= *(_DWORD *)(v4 + 212);
}
