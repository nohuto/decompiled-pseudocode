/*
 * XREFs of ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C01C3AA0
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C3794 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerCaptureData(struct _KTHREAD **this, struct CPointerCaptureData *a2)
{
  __int64 v3; // rcx
  struct CPointerCaptureData **v4; // rax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11547);
  if ( *((_DWORD *)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11549);
  if ( *((_DWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11551);
  if ( *((_DWORD *)a2 + 10) && *((_DWORD *)a2 + 33) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11553);
  if ( *((_DWORD *)a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11555);
  if ( *((_DWORD *)a2 + 42) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11557);
  if ( *((_DWORD *)a2 + 44) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11558);
  if ( *((_DWORD *)a2 + 74) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11559);
  v3 = *(_QWORD *)a2;
  if ( *(struct CPointerCaptureData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v4 = (struct CPointerCaptureData **)*((_QWORD *)a2 + 1), *v4 != a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct CPointerCaptureData *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
