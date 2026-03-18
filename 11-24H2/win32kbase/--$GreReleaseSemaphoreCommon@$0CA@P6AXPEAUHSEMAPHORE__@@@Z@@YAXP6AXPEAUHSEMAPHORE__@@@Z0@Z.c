/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C5BC
 * Callers:
 *     MultiUserGreTrackRemoveEngResource @ 0x14001A640 (MultiUserGreTrackRemoveEngResource.c)
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     EngAllocMem @ 0x14001C1E0 (EngAllocMem.c)
 *     MultiUserGreTrackAddEngResource @ 0x14007B090 (MultiUserGreTrackAddEngResource.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(__int64 a1, HSEMAPHORE a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", a2);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = (_QWORD *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v6 )
    *v6 &= ~0x100000000uLL;
  GreReleaseSemaphoreSharedInternal(a2);
}
