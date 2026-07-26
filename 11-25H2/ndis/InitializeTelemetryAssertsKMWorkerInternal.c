/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1400EBDEC
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400EBCE8 (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14014236C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665);
  g_ModuleName = (__int64)Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    qword_140127968 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14013F040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_14013F008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14013F078);
    _InterlockedIncrement(&g_AssertsOperational);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
