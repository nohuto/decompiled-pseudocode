/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001FB50
 * Callers:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall GreReleaseSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(__int64 a1, HSEMAPHORE a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"Hmgr", a2);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    if ( v5 )
      v4 = v5 + 8;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 28))-- == 1 )
        *(_QWORD *)v4 &= ~0x100000uLL;
    }
  }
  GreReleaseSemaphoreSharedInternal(a2);
}
