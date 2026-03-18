/*
 * XREFs of ??$GrepReleaseLockValidate@$0BA@@@YAXXZ @ 0x14002BB38
 * Callers:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B480 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

void GrepReleaseLockValidate<16>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v3 = v1 + 8;
  v4 = -v1;
  v5 = (_QWORD *)(v3 & -(__int64)(v4 != 0));
  if ( v5 )
  {
    if ( (*(_BYTE *)((v3 & -(__int64)(v4 != 0)) + 0x18))-- == 1 )
      *v5 &= ~0x10000uLL;
    if ( !*v5 )
      GrepOnAllLocksReleased();
  }
}
