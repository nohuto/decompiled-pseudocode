/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14064FD4C
 * Callers:
 *     EtwpFreeCompression @ 0x14045A6DC (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x14064F324 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x14064F8B0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x14064FB00 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
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
