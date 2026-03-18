/*
 * XREFs of ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003FF0C
 * Callers:
 *     NtUserGetCursorPos @ 0x1C003FEC0 (NtUserGetCursorPos.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall xxxGetCursorPos(unsigned __int64 a1, int a2)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 SavedCursorPosition; // rax
  struct tagPOINT v10; // rbx
  _BYTE *v11; // rdx

  v4 = PtiCurrentShared();
  v5 = 0LL;
  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v6 = *((_QWORD *)v4 + 57);
  if ( v6 && v6 != grpdeskRitInput )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_6;
    return 0LL;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v4) )
  {
    SavedCursorPosition = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  SavedCursorPosition = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v10 = (struct tagPOINT)SavedCursorPosition;
  if ( !PsGetCurrentProcessWow64Process() )
    v5 = 3LL;
  if ( (v5 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[7] = v11[7];
  *(struct tagPOINT *)a1 = v10;
  return 1LL;
}
