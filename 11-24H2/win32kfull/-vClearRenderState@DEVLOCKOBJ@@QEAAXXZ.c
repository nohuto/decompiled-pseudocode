/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1400205A4
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14001F8D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14002072C (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  Gre::Base *v2; // rcx
  HSEMAPHORE v3; // rsi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v2 = (Gre::Base *)*((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 105) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*((_DWORD *)v2 + 9) & 0x200) != 0 )
  {
    v3 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v2) + 728LL);
    GreAcquireSemaphoreSharedInternal(v3);
    GrepAcquireLockValidate<3>();
    if ( !*((_QWORD *)this + 14) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
      v5 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
      v6 = v5 + 8;
      v7 = -v5;
      if ( (v6 & -(__int64)(v7 != 0)) != 0 )
        *(_DWORD *)((v6 & -(__int64)(v7 != 0)) + 0x158) &= ~1u;
    }
    EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v3);
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    v11 = v9 + 8;
    v12 = -v9;
    v13 = (_QWORD *)(v11 & -(__int64)(v12 != 0));
    if ( v13 )
    {
      if ( (*(_BYTE *)((v11 & -(__int64)(v12 != 0)) + 0xB))-- == 1 )
        *v13 &= ~8uLL;
      if ( !*v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal(v3);
  }
}
