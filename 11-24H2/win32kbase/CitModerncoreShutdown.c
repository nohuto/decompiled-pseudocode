/*
 * XREFs of CitModerncoreShutdown @ 0x14023CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140151EE0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitModerncoreShutdown(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax

  if ( CitIsEnabled(a1) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    CitpLogoff(*(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18968) + 32LL));
  }
}
