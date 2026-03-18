/*
 * XREFs of PoSetUserPresent @ 0x1403F2A80
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     PopDiagTraceSetSystemState @ 0x1403F2BB4 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x1403F2C70 (PopUserPresentSet.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
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
