/*
 * XREFs of ?SetPointerRawDataListFrameId@CTouchProcessor@@AEAAXKPEAUCPointerRawData@@@Z @ 0x140207B40
 * Callers:
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x14010AAA8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerRawDataListFrameId(PERESOURCE *this, int a2, struct CPointerRawData *a3)
{
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7886);
  while ( a3 )
  {
    if ( *(_DWORD *)a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7891);
    *(_DWORD *)a3 = a2;
    a3 = (struct CPointerRawData *)*((_QWORD *)a3 + 3);
  }
}
