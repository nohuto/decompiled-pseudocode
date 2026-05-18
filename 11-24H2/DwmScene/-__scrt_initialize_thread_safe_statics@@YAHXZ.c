/*
 * XREFs of ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18000C890
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x18000B95C (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x18000BB2C (atexit.c)
 *     sub_18000BEEC @ 0x18000BEEC (sub_18000BEEC.c)
 */

__int64 __scrt_initialize_thread_safe_statics(void)
{
  HMODULE ModuleHandleW; // rbx
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // rdi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // rax

  InitializeCriticalSectionAndSpinCount(&CriticalSection, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_9;
  }
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  ModuleHandleW,
                                                                                                  "SleepConditionVariableCS");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "WakeAllConditionVariable");
  if ( SleepConditionVariableCS && WakeAllConditionVariable )
  {
    qword_1801C42D0 = (__int64)SleepConditionVariableCS;
    qword_1801C42D8 = (__int64)WakeAllConditionVariable;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    sub_18000BEEC(7u);
    JUMPOUT(0x18000C95FLL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
    goto LABEL_9;
  atexit(__scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
