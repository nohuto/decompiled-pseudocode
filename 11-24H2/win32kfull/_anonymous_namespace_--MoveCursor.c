/*
 * XREFs of _anonymous_namespace_::MoveCursor @ 0x140092650
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 * Callees:
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x140093B44 (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 */

void __fastcall anonymous_namespace_::MoveCursor(struct tagPOINT *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  LONG y; // ebx
  LONG x; // edi
  CursorApiRouter *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  y = a1->y;
  x = a1->x;
  v6 = *(CursorApiRouter **)(UserSessionState + 36360);
  v9 = W32GetUserSessionState(v8, v7);
  CursorApiRouter::MovePointerAsync(v6, *(HDEV *)(*(_QWORD *)(v9 + 57008) + 48LL), x, y, 8u);
  v12 = W32GetUserSessionState(v11, v10);
  CCursorSizes::zzzUpdateGlobalCursorSize(*(CCursorSizes **)(v12 + 36400), a1, 0);
}
