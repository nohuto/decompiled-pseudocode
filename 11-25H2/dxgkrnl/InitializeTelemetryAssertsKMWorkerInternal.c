/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x14009EF20
 * Callers:
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x14009EE1C (InitializeTelemetryAssertsKMByDriverObject.c)
 * Callees:
 *     UninitializeTelemetryAssertsLocks @ 0x14009F0BC (UninitializeTelemetryAssertsLocks.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14040402C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _FAST_MUTEX *Pool2; // rax
  unsigned int v6; // ebx
  __int64 v7; // r9
  void *v8; // rax

  Pool2 = (struct _FAST_MUTEX *)ExAllocatePool2(66LL, 56LL, 1953657665LL, a4);
  v6 = 0;
  g_AssertFastMutex = Pool2;
  if ( Pool2
    && (Pool2->Count = 1,
        Pool2->Owner = 0LL,
        Pool2->Contention = 0,
        KeInitializeEvent(&Pool2->Event, SynchronizationEvent, 0),
        v8 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL, v7),
        (g_ModuleName = (__int64)v8) != 0) )
  {
    memmove(v8, a1[1], *(unsigned __int16 *)a1);
    qword_14015E6E8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14017F040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_14017F008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14017F078);
    _InterlockedIncrement(&g_AssertsOperational);
  }
  else
  {
    v6 = -1073741801;
    UninitializeTelemetryAssertsLocks();
  }
  return v6;
}
