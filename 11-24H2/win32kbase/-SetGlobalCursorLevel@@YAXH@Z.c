/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x140133170
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x14014D7E0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x14019ED60 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(__int64 a1)
{
  int v1; // ebx
  __int64 *j; // rcx
  __int64 i; // rdx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 k; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19200) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(j) + 19200) + 40LL) + 16LL);
          i;
          i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 176); j != (__int64 *)(i + 176); j = (__int64 *)*j )
      {
        v7 = *(j - 38);
        *((_DWORD *)j + 4) = v1;
        *(_DWORD *)(v7 + 432) = v1;
      }
    }
  }
  UserGdiSessionState = W32GetUserGdiSessionState(j);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  for ( k = *(_QWORD *)(ProcessWin32Process + 328); k; k = *(_QWORD *)(k + 704) )
  {
    v8 = *(_QWORD *)(k + 472);
    *(_DWORD *)(k + 792) = v1;
    *(_DWORD *)(v8 + 432) = v1;
  }
}
