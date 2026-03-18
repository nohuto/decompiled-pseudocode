/*
 * XREFs of ?CleanupMitIocpSupport@@YAX_N@Z @ 0x14026B918
 * Callers:
 *     EditionDeactivateMitInput @ 0x14023FCE0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupMitIocpSupport(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19272) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    IOCPDispatcher::Close(*(IOCPDispatcher **)(UserSessionState + 19272), 1);
    IOCPDispatcher_Destroy();
  }
}
