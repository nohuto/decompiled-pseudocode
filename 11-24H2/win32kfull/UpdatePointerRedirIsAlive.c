/*
 * XREFs of UpdatePointerRedirIsAlive @ 0x14019FE7C
 * Callers:
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x14019FBAC (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     IsPointerInputRedirected @ 0x14019FCC4 (IsPointerInputRedirected.c)
 *     EditionIsPointerInputRedirected @ 0x14019FD60 (EditionIsPointerInputRedirected.c)
 *     _RegisterPointerInputTarget @ 0x14028C9A4 (_RegisterPointerInputTarget.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerRedirIsAlive(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = (__int64 *)(a1 + 208);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    if ( *v2 )
    {
      v5 = *(_QWORD *)(result + 40);
      if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
      {
        HMAssignmentUnlock(a1 + 8 * (i + 26LL));
        UserSessionState = W32GetUserSessionState(v7, v6);
        if ( i )
        {
          *(_DWORD *)(UserSessionState + 344) = 0;
          result = W32GetUserSessionState(v10, v9);
          *(_DWORD *)(result + 348) = 0;
        }
        else
        {
          *(_DWORD *)(UserSessionState + 336) = 0;
          result = W32GetUserSessionState(v10, v9);
          *(_DWORD *)(result + 340) = 0;
        }
      }
    }
    ++v2;
  }
  return result;
}
