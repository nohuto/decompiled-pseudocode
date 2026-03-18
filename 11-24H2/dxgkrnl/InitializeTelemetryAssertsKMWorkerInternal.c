/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1400A1280
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400A117C (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     UninitializeTelemetryAssertsLocks @ 0x1400A141C (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1403FDD6C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  struct _FAST_MUTEX *Pool2; // rax
  unsigned int v3; // ebx
  void *v4; // rax

  Pool2 = (struct _FAST_MUTEX *)ExAllocatePool2(66LL, 56LL, 1953657665LL);
  v3 = 0;
  g_AssertFastMutex = Pool2;
  if ( Pool2
    && (Pool2->Count = 1,
        Pool2->Owner = 0LL,
        Pool2->Contention = 0,
        KeInitializeEvent(&Pool2->Event, SynchronizationEvent, 0),
        v4 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL),
        (g_ModuleName = (__int64)v4) != 0) )
  {
    memmove(v4, a1[1], *(unsigned __int16 *)a1);
    qword_140161708 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140182040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_140182008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140182078);
    _InterlockedIncrement(&g_AssertsOperational);
  }
  else
  {
    v3 = -1073741801;
    UninitializeTelemetryAssertsLocks();
  }
  return v3;
}
