/*
 * XREFs of WmiTraceMessage @ 0x1402D1120
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 */

__int64 WmiTraceMessage(unsigned __int64 a1, unsigned int a2, __int128 *a3, __int16 a4, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  return EtwpTraceMessageVa(a1, a2, a3, a4, (__int64)va, 0);
}
