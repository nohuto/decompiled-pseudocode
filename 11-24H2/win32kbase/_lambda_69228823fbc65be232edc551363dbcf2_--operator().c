/*
 * XREFs of _lambda_69228823fbc65be232edc551363dbcf2_::operator() @ 0x1401B3DE0
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B37D4 (W32AttachToEverySessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B3B64 (W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 */

__int64 __fastcall lambda_69228823fbc65be232edc551363dbcf2_::operator()(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  unsigned int MaxSessionCount; // ebx
  __int64 v6; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(a2, a4);
  if ( PsGetCurrentProcessWin32Process(a1) )
    return lambda_32f3cb84696a90cec3124b3263005914_::operator()(a4);
  MaxSessionCount = W32GetMaxSessionCount();
  if ( (unsigned int)W32GetCurrentWin32kSessionId() < MaxSessionCount )
  {
    if ( W32GetSessionState(v6) )
      return lambda_32f3cb84696a90cec3124b3263005914_::operator()(a4);
  }
  return 3221225485LL;
}
