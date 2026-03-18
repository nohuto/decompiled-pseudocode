/*
 * XREFs of _lambda_651b33e2fe6a2bdcb95226f96e252a2c_::operator() @ 0x1401B3D6C
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B3858 (W32AttachToEverySessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B3BD4 (W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 */

__int64 __fastcall lambda_651b33e2fe6a2bdcb95226f96e252a2c_::operator()(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  unsigned int MaxSessionCount; // ebx
  __int64 v5; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571_(a2);
  v3 = 0;
  if ( PsGetCurrentProcessWin32Process(a1)
    || (MaxSessionCount = W32GetMaxSessionCount(), (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount)
    && W32GetSessionState(v5) )
  {
    InputCoreProviderCallbackWorker();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
