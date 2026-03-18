/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x140092EE8
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  __int64 UserSessionState; // rax

  if ( !a1 && *(_QWORD *)(W32GetUserSessionState(0LL) + 70824) )
  {
    UserSessionState = W32GetUserSessionState(a1);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 70824));
  }
  *(_QWORD *)(W32GetUserSessionState(a1) + 70824) = a1;
}
