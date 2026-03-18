/*
 * XREFs of LockThreadByClientId @ 0x1401DD878
 * Callers:
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1401DD758 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockThreadByClientId(void *a1, PETHREAD *a2)
{
  NTSTATUS v3; // esi
  int ThreadSessionId; // ebx

  v3 = PsLookupThreadByThreadId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ThreadSessionId = PsGetThreadSessionId(*a2);
  if ( ThreadSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  return 3221225473LL;
}
