/*
 * XREFs of ?WaitForWinstaRundown@@YAXPEAU_KEVENT@@@Z @ 0x140216660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WaitForWinstaRundown(struct _KEVENT *StartContext, __int64 a2)
{
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _EX_RUNDOWN_REF *v5; // rax

  if ( StartContext )
    KeSetEvent(StartContext, 1, 0);
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(StartContext, a2);
  ExWaitForRundownProtectionRelease(UserSessionState + 7946);
  v5 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v4, v3);
  ExRundownCompleted(v5 + 7946);
}
