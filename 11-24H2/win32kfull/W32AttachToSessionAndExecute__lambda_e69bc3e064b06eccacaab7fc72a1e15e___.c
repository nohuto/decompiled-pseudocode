/*
 * XREFs of W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140287AF0
 * Callers:
 *     NtUserSetProcessWin32Capabilities @ 0x14029E3C0 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140287A40 (W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 *     _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x140287BB4 (_lambda_e69bc3e064b06eccacaab7fc72a1e15e_--operator().c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v9; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v11; // rsi

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    if ( PsGetCurrentProcessWin32Process(v4) )
      return lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    MaxSessionCount = W32GetMaxSessionCount();
    if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount && W32GetSessionState(v7, v6) )
      return lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(a2);
    else
      return 3221225485LL;
  }
  else
  {
    v9 = -1073741811;
    ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
    v11 = ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v9 = W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(ReferencedSessionProcessWithTag, a2);
      ObfDereferenceObjectWithTag(v11, 0x47727355u);
    }
    return v9;
  }
}
