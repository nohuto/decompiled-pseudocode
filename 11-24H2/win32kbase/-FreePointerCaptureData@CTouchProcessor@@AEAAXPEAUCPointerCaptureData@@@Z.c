/*
 * XREFs of ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1401FC424
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401FC120 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerCaptureData(PERESOURCE *this, struct CPointerCaptureData *a2)
{
  __int64 v3; // rcx
  struct CPointerCaptureData **v4; // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11660);
  if ( *((_DWORD *)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11662);
  if ( *((_DWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11664);
  if ( *((_DWORD *)a2 + 10) && *((_DWORD *)a2 + 33) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11666);
  if ( *((_DWORD *)a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11668);
  if ( *((_DWORD *)a2 + 42) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11670);
  if ( *((_DWORD *)a2 + 44) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11671);
  if ( *((_DWORD *)a2 + 74) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11672);
  v3 = *(_QWORD *)a2;
  if ( *(struct CPointerCaptureData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v4 = (struct CPointerCaptureData **)*((_QWORD *)a2 + 1), *v4 != a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct CPointerCaptureData *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  GreDeleteFastMutex((char *)a2);
}
