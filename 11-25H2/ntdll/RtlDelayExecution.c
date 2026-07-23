/*
 * XREFs of RtlDelayExecution @ 0x1800CE100
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

NTSTATUS __cdecl RtlDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  struct _TEB *v2; // rsi
  NTSTATUS v5; // ebx
  NTSTATUS result; // eax
  unsigned int SpinCallCount; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  PerformanceCounter.QuadPart = 0LL;
  if ( !DelayInterval->QuadPart && (dword_1801D5F2C || dword_1801D5F28) )
  {
    ++v2->SpinCallCount;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( PerformanceCounter.QuadPart - v2->LastSleepCounter < (unsigned int)SmtDelayedConfiguration )
    {
      SpinCallCount = v2->SpinCallCount;
      if ( SpinCallCount >= dword_1801D5F24 )
      {
        if ( dword_1801D5F2C )
          v8 = dword_1801D5F2C * (SpinCallCount - dword_1801D5F24);
        else
          v8 = 0;
        v9 = dword_1801D5F28 + v8;
        if ( v9 > dword_1801D5F30 )
          v9 = dword_1801D5F30;
        v10 = 10 * v9 / MEMORY[0x7FFE02D6];
        if ( (_DWORD)v10 )
        {
          do
          {
            _mm_pause();
            --v10;
          }
          while ( v10 );
        }
      }
    }
    v5 = ZwDelayExecution(Alertable, DelayInterval);
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v2->LastSleepCounter = PerformanceCounter.QuadPart;
  }
  else
  {
    v5 = ZwDelayExecution(Alertable, DelayInterval);
  }
  result = v5;
  if ( v5 != 1073741860 )
    v2->SpinCallCount = 0;
  return result;
}
