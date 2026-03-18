/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14009350C
 * Callers:
 *     NtUserGetCursorPos @ 0x1400934C0 (NtUserGetCursorPos.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxGetCursorPos(struct tagPOINT *a1, __int64 a2)
{
  int v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagPOINT v13; // rbx
  __int64 v14; // rax
  struct tagPOINT *v15; // rdx

  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  if ( *(_QWORD *)(v4 + 496) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19200);
    if ( *(_QWORD *)(v4 + 496) != v6 )
    {
      UserSetLastError(5);
      return 0LL;
    }
  }
  v7 = v2 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_8;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v4) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_9;
  }
LABEL_8:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6);
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_9:
  v13 = (struct tagPOINT)SavedCursorPosition;
  v14 = -PsGetCurrentProcessWow64Process(v11, v10, v12);
  v15 = a1;
  if ( ((v14 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v15 = (struct tagPOINT *)MmUserProbeAddress;
  LOBYTE(v15->x) = v15->x;
  HIBYTE(v15->y) = HIBYTE(v15->y);
  *a1 = v13;
  return 1LL;
}
