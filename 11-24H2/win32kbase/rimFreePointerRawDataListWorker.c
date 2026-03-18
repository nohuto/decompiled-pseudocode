/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x140056464
 * Callers:
 *     rimReclaimHoldingFrame @ 0x14005640C (rimReclaimHoldingFrame.c)
 *     RIMFreeAllHoldingFrames @ 0x14014CCEC (RIMFreeAllHoldingFrames.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(_QWORD *Buffer)
{
  _QWORD *v1; // rbx
  PVOID v2; // rdi

  if ( Buffer )
  {
    v1 = Buffer;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      if ( !*((_QWORD *)v2 + 1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 442LL);
      GreDeleteFastMutex(*((char **)v2 + 1));
      GreDeleteFastMutex((char *)v2);
    }
    while ( v1 );
  }
}
