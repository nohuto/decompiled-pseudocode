/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14065164C
 * Callers:
 *     EtwpFreeCompression @ 0x140463FA8 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140650C1C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1406511B0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140651400 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14024D1E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1416) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1416) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5LL);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
