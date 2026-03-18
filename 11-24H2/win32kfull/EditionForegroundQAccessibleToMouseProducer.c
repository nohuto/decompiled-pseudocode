/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1401A79E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1401D8CB0 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 */

__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(UIPrivilegeIsolation *a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = a2;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( UIPrivilegeIsolation::CheckAccess(
         a1,
         (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18944) + 472LL),
         v9) )
  {
    return 1LL;
  }
  if ( v4 )
    MSGLUA_GPQFOREGROUND(v11, v10);
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
