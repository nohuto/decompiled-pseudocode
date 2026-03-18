/*
 * XREFs of ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C4D4
 * Callers:
 *     MultiUserGreTrackRemoveEngResource @ 0x14001A640 (MultiUserGreTrackRemoveEngResource.c)
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     EngAllocMem @ 0x14001C1E0 (EngAllocMem.c)
 *     MultiUserGreTrackAddEngResource @ 0x14007B090 (MultiUserGreTrackAddEngResource.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepAcquireLockValidate<32>()
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v9; // edx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  result = v2 + 8;
  v5 = (__int64 *)((v2 + 8) & -(__int64)(v2 != 0));
  if ( v5 )
  {
    v6 = *v5;
    result = 0xFFFFFFFF00000000uLL;
    if ( (*v5 & 0xFFFFFFFF00000000uLL) != 0 && (v6 & 0x100000000LL) == 0 )
    {
      v9 = 37;
      do
      {
        result = (unsigned int)v1;
        if ( !_bittest64(&v6, v1) )
          result = v9;
        ++v1;
        v9 = result;
      }
      while ( v1 < 0x40 );
      if ( (int)result > 32 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *v5 |= 0x100000000uLL;
  }
  return result;
}
