/*
 * XREFs of EtwpBuffersFlushRequired @ 0x1403E4B90
 * Callers:
 *     EtwpSwitchBuffer @ 0x1403E45C0 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(__int64 a1)
{
  int UsedProcessorCount; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( !*(_DWORD *)(a1 + 212) )
    return 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  return *(_DWORD *)(v3 + 232) - UsedProcessorCount - *(_DWORD *)(v4 + 228) >= *(_DWORD *)(v4 + 212);
}
