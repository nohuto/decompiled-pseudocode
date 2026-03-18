/*
 * XREFs of _lambda_228c94f87b50664141beb087d74bed1f_::operator() @ 0x1401B3C4C
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140148CA0 (W32AttachToEverySessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x1401443C4 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x140169054 (W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 */

__int64 __fastcall lambda_228c94f87b50664141beb087d74bed1f_::operator()(__int64 a1, unsigned int a2, int a3)
{
  unsigned int MaxSessionCount; // ebx
  __int64 v4; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_f6639040149d830ab05feaa79928b51c_(a2);
  if ( PsGetCurrentProcessWin32Process(a1) )
    return lambda_f6639040149d830ab05feaa79928b51c_::operator()();
  MaxSessionCount = W32GetMaxSessionCount();
  if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount )
  {
    if ( W32GetSessionState(v4) )
      return lambda_f6639040149d830ab05feaa79928b51c_::operator()();
  }
  return 3221225485LL;
}
