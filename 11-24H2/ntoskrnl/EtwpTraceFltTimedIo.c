/*
 * XREFs of EtwpTraceFltTimedIo @ 0x14064CF80
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 */

int __fastcall EtwpTraceFltTimedIo(__int64 a1, int a2, unsigned int a3, __int16 a4, __int64 a5)
{
  return EtwTraceTimedEvent(a4, a3, a1, a2, 0x501803u, a5);
}
