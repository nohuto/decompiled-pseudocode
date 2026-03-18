/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x140146428
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x1401463D0 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x14019DD28 (InitializeTelemetryAssertsLocks.c)
 *     UninitializeTelemetryAssertsLocks @ 0x14019F348 (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402C42B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  int v2; // ebx
  void *Pool2; // rax

  v2 = InitializeTelemetryAssertsLocks();
  if ( v2 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL);
    g_ModuleName = (__int64)Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
      qword_14029E4D8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402C2040);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1402C2008);
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1402C2078);
      _InterlockedIncrement(&g_AssertsOperational);
      return (unsigned int)v2;
    }
    v2 = -1073741801;
  }
  UninitializeTelemetryAssertsLocks();
  return (unsigned int)v2;
}
