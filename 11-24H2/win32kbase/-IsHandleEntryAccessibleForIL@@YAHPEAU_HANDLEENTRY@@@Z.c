/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400CA154
 * Callers:
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401A911C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1400CA27C (EtwTraceUIPIHandleValidationError.c)
 *     ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x1401A5A40 (-CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v7; // rbp
  __int16 v8; // ax
  __int64 v9; // rdi
  const struct tagUIPI_INFO *v10; // r8
  __int64 v11; // rcx
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 19888);
  v4 = 5LL * (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5);
  v7 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_WORD *)&unk_1402437BC + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v8 & 2) != 0 )
  {
    v9 = *(_QWORD *)(v3 + 8 * v4 + 8);
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 1LL;
    v13 = *(_QWORD *)(v3 + 8 * v4 + 8);
    if ( !v13 )
      return 1LL;
    v9 = *(_QWORD *)(v13 + 464);
  }
  if ( !v9
    || *(_QWORD *)v9 == *(_QWORD *)(W32GetUserGdiSessionState() + 40)
    || UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(v7 + 109),
         (const struct tagUIPI_INFO *)(v9 + 872),
         v10) )
  {
    return 1LL;
  }
  v14 = *((unsigned __int8 *)a1 + 24);
  v15 = W32GetUserSessionState(v11);
  EtwTraceUIPIHandleValidationError(
    v7,
    v9,
    **(_QWORD **)(*(_QWORD *)(v15 + 19888) + 40LL * (unsigned int)(((__int64)a1 - *(_QWORD *)(v15 + 19944)) >> 5)),
    v14);
  UserSetLastError(5);
  return 0LL;
}
