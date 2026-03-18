/*
 * XREFs of ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x140022E60
 * Callers:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 GrepReleaseLockValidate<20>()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    result = v2 + 8;
    if ( v2 )
      v1 = v2 + 8;
    if ( v1 )
    {
      if ( (*(_BYTE *)(v1 + 28))-- == 1 )
        *(_QWORD *)v1 &= ~0x100000uLL;
    }
  }
  return result;
}
