/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x1802D4DC0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1802D18C8 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     __scrt_fastfail @ 0x1802D1C20 (__scrt_fastfail.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rdi
  FARPROC v2; // rax

  InitializeCriticalSectionAndSpinCount(&stru_1808C85A8, 0xFA0u);
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
    qword_1808C85D0 = (__int64)ProcAddress;
    qword_1808C85D8 = (__int64)v2;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    _scrt_fastfail(7u);
    JUMPOUT(0x1802D4E8FLL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
    goto LABEL_9;
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
