/*
 * XREFs of ??_EPTPEngineTraceProducer@@UEAAPEAXI@Z @ 0x140221B10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1PTPEngineTraceProducer@@UEAA@XZ @ 0x140157330 (--1PTPEngineTraceProducer@@UEAA@XZ.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::`vector deleting destructor'(
        PTPEngineTraceProducer *Buffer,
        char a2)
{
  PTPEngineTraceProducer::~PTPEngineTraceProducer(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
