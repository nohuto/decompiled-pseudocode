/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x180002310
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x180001FE8 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1800021B8 (atexit.c)
 *     __scrt_fastfail @ 0x1800026C0 (__scrt_fastfail.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rdi
  FARPROC v2; // rax

  InitializeCriticalSectionAndSpinCount(&stru_1800595E8, 0xFA0u);
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
    qword_180059610 = (__int64)ProcAddress;
    qword_180059618 = (__int64)v2;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    _scrt_fastfail(7LL);
    JUMPOUT(0x1800023DFLL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
    goto LABEL_9;
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
