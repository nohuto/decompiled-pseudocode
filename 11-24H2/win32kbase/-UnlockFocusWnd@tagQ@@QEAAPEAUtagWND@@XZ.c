/*
 * XREFs of ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x140060DF0
 * Callers:
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 */

struct tagWND *__fastcall tagQ::UnlockFocusWnd(tagQ *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 66); i; i = *(_QWORD *)(i + 1688) )
    *(_QWORD *)(*(_QWORD *)(i + 488) + 32LL) = 0LL;
  return (struct tagWND *)HMAssignmentUnlock((__int64 *)this + 15);
}
