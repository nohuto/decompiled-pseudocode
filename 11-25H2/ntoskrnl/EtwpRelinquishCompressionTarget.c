/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14064564C
 * Callers:
 *     EtwpFreeCompression @ 0x1404649D8 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140644C1C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1406451B0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140645400 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1416) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1416) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
