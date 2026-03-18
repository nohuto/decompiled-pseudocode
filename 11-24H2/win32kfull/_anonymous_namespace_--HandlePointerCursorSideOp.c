/*
 * XREFs of _anonymous_namespace_::HandlePointerCursorSideOp @ 0x140092420
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x140092370 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140132C48 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140135364 (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 */

__int64 __fastcall anonymous_namespace_::HandlePointerCursorSideOp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ett
  __int16 v5; // bx
  _BOOL8 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36368);
  _m_prefetchw((const void *)(v2 + 100));
  LODWORD(result) = *(_DWORD *)(v2 + 100);
  do
  {
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 100), 0, result);
  }
  while ( v4 != (_DWORD)result );
  v5 = result;
  if ( (result & 1) != 0 )
  {
    EnterCrit(1LL, 0LL);
    anonymous_namespace_::xxxRestoreMouseCursors();
    result = UserSessionSwitchLeaveCrit();
  }
  if ( (v5 & 0x700) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (v5 & 0x100) != 0 )
    {
      v6 = 1LL;
      v7 = 1LL;
    }
    else
    {
      v6 = (v5 & 0x400) != 0;
      v7 = 0LL;
    }
    anonymous_namespace_::xxxSwitchCursors(v6, v7);
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 36368) + 80LL) = 0;
    result = UserSessionSwitchLeaveCrit();
  }
  if ( (v5 & 2) != 0 )
  {
    EnterCrit(1LL, 0LL);
    UserSessionState = W32GetUserSessionState(v11, v10);
    if ( *(_DWORD *)(UserSessionState + 36396) == 4 )
    {
      v15 = 8LL;
    }
    else if ( *(_DWORD *)(UserSessionState + 36396) == 5 )
    {
      v15 = 1LL;
    }
    else
    {
      v14 = (unsigned int)(*(_DWORD *)(UserSessionState + 36396) - 6);
      if ( *(_DWORD *)(UserSessionState + 36396) == 6 )
      {
        v15 = 2LL;
      }
      else
      {
        if ( *(_DWORD *)(UserSessionState + 36396) != 7 )
        {
LABEL_20:
          zzzUpdateCursorImage(v13, v14);
          result = UserSessionSwitchLeaveCrit();
          goto LABEL_21;
        }
        v15 = 3LL;
      }
    }
    TransitionCursorSuppressionState(v15);
    goto LABEL_20;
  }
LABEL_21:
  if ( (v5 & 4) != 0 )
  {
    EnterCrit(1LL, 0LL);
    xxxEnsureAllDpiCursors();
    return UserSessionSwitchLeaveCrit();
  }
  return result;
}
