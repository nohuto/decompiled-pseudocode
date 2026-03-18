/*
 * XREFs of _lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator() @ 0x14028B288
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B120 (W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028B228 (W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028B2FC (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 */

__int64 __fastcall lambda_18de47f5008d7628aefe0bcb3f8d210a_::operator()(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  unsigned int MaxSessionCount; // ebx
  __int64 v5; // rdx
  int v6; // ecx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(a2);
  v3 = 0;
  if ( PsGetCurrentProcessWin32Process(a1)
    || (MaxSessionCount = W32GetMaxSessionCount(), (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount)
    && W32GetSessionState(v6, v5) )
  {
    InputCoreProviderCallbackWorker();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
