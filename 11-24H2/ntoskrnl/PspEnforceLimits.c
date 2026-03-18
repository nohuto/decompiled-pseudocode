/*
 * XREFs of PspEnforceLimits @ 0x1408EBA7C
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1408EB3C0 (PspJobTimeLimitsWork.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspGetNextJob @ 0x1408EBB60 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspClearNoWakeChargeLimitNotification @ 0x1408EDB54 (PspClearNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimits(char a1)
{
  void *i; // rcx
  __int64 result; // rax
  void *v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 v6[8]; // [rsp+30h] [rbp-58h] BYREF

  memset_0(v6, 0, sizeof(v6));
  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 )
    PspClearNoWakeChargeLimitNotification();
  for ( i = 0LL; ; i = v4 )
  {
    result = PspGetNextJob(i);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 1304) )
    {
      v5 = (volatile signed __int32 *)(result + 1552);
      if ( !a1 || (*v5 & 0x100000) != 0 )
      {
        _InterlockedAnd(v5, 0xFFEFFFFF);
        memset_0(v6, 0, sizeof(v6));
        PspEnumJobsAndProcessesInJobHierarchy(v4, (__int64)v6, 6);
      }
    }
  }
  return result;
}
