/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x140059100
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x140058ED4 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1400590A4 (atexit.c)
 *     __scrt_fastfail @ 0x140059610 (__scrt_fastfail.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rdi
  FARPROC v2; // rax

  InitializeCriticalSectionAndSpinCount(&CriticalSection, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_9;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v2 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  if ( ProcAddress && v2 )
  {
    qword_1400C3D50 = (__int64)ProcAddress;
    qword_1400C3D58 = (__int64)v2;
    goto LABEL_7;
  }
  hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEvent )
  {
LABEL_9:
    _scrt_fastfail(7LL);
    JUMPOUT(0x1400591CFLL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
    goto LABEL_9;
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
