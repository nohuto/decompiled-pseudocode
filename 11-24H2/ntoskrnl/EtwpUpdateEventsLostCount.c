/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x14032BF28
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14032A9F0 (EtwpFailLogging.c)
 *     EtwpCompressBuffer @ 0x140650CB4 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
