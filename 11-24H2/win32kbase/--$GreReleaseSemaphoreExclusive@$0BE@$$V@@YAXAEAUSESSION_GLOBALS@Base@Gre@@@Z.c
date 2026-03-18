/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001FA60
 * Callers:
 *     ?GreReleaseHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3010 (-GreReleaseHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<20,>(__int64 *a1)
{
  __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"Hmgr", *a1 + 1512);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
    if ( v4 )
      v3 = v4 + 8;
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 28))-- == 1 )
        *(_QWORD *)v3 &= ~0x100000uLL;
    }
  }
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 1512));
}
