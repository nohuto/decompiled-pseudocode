/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401BF12C
 * Callers:
 *     AllocateW32ProcessImpl @ 0x140166B20 (AllocateW32ProcessImpl.c)
 *     Win32AllocPoolWithQuotaZInitAndSessionHint @ 0x1401BEC90 (Win32AllocPoolWithQuotaZInitAndSessionHint.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401BF1F0 (_lambda_7830472d83fd6962041fe396e2298a02_--operator().c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v7; // rdi
  __int64 UserSessionState; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSessionState = W32GetUserSessionState(v4);
    return lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, UserSessionState);
  }
  else
  {
    v10 = 0LL;
    v5 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v10);
    v7 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v5 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v5 >= 0 )
      {
        v5 = lambda_7830472d83fd6962041fe396e2298a02_::operator()(a2, v10);
        PsReleaseProcessExitSynchronization(v7);
      }
      ObfDereferenceObjectWithTag(v7, 0x47727355u);
    }
    return (unsigned int)v5;
  }
}
