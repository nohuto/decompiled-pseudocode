/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1407B177C
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D976C (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407B17B0 (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 344) )
    return EtwpRealtimeUpdateReferenceTime();
  return result;
}
