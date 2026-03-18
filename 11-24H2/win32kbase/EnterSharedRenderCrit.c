/*
 * XREFs of EnterSharedRenderCrit @ 0x140162830
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *EnterSharedRenderCrit()
{
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  PsEnterPriorityRegion();
  KeEnterCriticalRegion();
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  UserSessionState = W32GetUserSessionState(v1);
  LOBYTE(v3) = 1;
  ExAcquireFastResourceShared(*(_QWORD *)(UserSessionState + 8), CurrentThreadWin32Thread + 104, v3);
  return PtiCurrent(v4);
}
