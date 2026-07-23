/*
 * XREFs of PoSetUserPresent @ 0x1403E67A0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     PopDiagTraceSetSystemState @ 0x1403E68D4 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x1403E6990 (PopUserPresentSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    v6 = 0;
    EtwTraceKernelEvent((int)&v4, 1, 0x80008000, 4673, 5249026);
  }
  PopDiagTraceSetSystemState(4LL, a1);
  result = PopUserPresentSet(a1);
  if ( v2 )
    return PopReleasePolicyLock();
  return result;
}
