/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$01@@QEAA@XZ @ 0x14001DEF4
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x1400C27B4 (--$GrepReleaseLockValidate@$01@@YAXXZ.c)
 */

void __fastcall SEMOBJEXORSHARED<2>::~SEMOBJEXORSHARED<2>(__int64 a1)
{
  HSEMAPHORE v1; // rsi
  __int64 v2; // rdi
  HSEMAPHORE v3; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *(HSEMAPHORE *)a1;
  v2 = 0LL;
  v3 = *(HSEMAPHORE *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v3);
    GrepReleaseLockValidate<2>();
    GreReleaseSemaphoreSharedInternal(v1);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v3);
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v2 = *ThreadWin32Thread;
    }
    v6 = v2 + 8;
    v7 = -v2;
    if ( (v6 & -(__int64)(v7 != 0)) != 0 && (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0xA))-- == 1 )
      *(_QWORD *)(v6 & -(__int64)(v7 != 0)) &= ~4uLL;
    GreReleaseSemaphoreSharedInternal(v1);
  }
}
