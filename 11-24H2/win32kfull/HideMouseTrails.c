/*
 * XREFs of HideMouseTrails @ 0x140094900
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x140093B44 (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

void __fastcall HideMouseTrails(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  CursorApiRouter *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( *(int *)(W32GetUserSessionState(a1, a2) + 16300) > 0 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v7 = *(unsigned int *)(W32GetUserSessionState(v6, v5) + 16296);
    v8 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(UserSessionState + 16300));
    if ( (int)v8 <= (int)v7 )
    {
      v9 = *(CursorApiRouter **)(W32GetUserSessionState(v8, v7) + 36360);
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928);
      v13 = *(_DWORD *)(v12 + 4964);
      v15 = *(_QWORD *)(W32GetUserSessionState(v14, v12) + 19928);
      v16 = *(_DWORD *)(v15 + 4960);
      v18 = W32GetUserSessionState(v17, v15);
      CursorApiRouter::MovePointerAsync(v9, *(HDEV *)(*(_QWORD *)(v18 + 57008) + 48LL), v16, v13, 1u);
    }
  }
}
