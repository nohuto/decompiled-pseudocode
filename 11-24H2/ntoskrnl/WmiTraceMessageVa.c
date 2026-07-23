/*
 * XREFs of WmiTraceMessageVa @ 0x1404B2190
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 */

__int64 __fastcall WmiTraceMessageVa(unsigned __int64 a1, unsigned int a2, __int128 *a3, __int16 a4, __int64 a5)
{
  return EtwpTraceMessageVa(a1, a2, a3, a4, a5, 0);
}
