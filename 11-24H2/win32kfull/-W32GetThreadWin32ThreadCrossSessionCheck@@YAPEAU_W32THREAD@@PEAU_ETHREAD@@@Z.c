/*
 * XREFs of ?W32GetThreadWin32ThreadCrossSessionCheck@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400D94E0
 * Callers:
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

struct _W32THREAD *__fastcall W32GetThreadWin32ThreadCrossSessionCheck(struct _ETHREAD *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(a1)) != 0 )
  {
    return *(struct _W32THREAD **)ThreadWin32Thread;
  }
  else
  {
    return 0LL;
  }
}
