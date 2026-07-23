/*
 * XREFs of KiHeteroComputeThreadImportance @ 0x140329820
 * Callers:
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x1403293B4 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x1403296A0 (KiEvaluatePreemptionSwapTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int16 __fastcall KiHeteroComputeThreadImportance(int a1, unsigned __int8 a2)
{
  __int16 v2; // cx
  int v4; // [rsp+0h] [rbp-18h]
  __int16 v5; // [rsp+4h] [rbp-14h]
  char v6; // [rsp+6h] [rbp-12h]

  v4 = 33752069;
  v5 = 6;
  v6 = 1;
  v2 = *((unsigned __int8 *)&v4 + a1);
  if ( (KiHeteroSchedulerOptionsMask & 8) == 0 || (KiHeteroSchedulerOptions & 8) == 0 )
    a2 = 0;
  return a2 | (unsigned __int16)(v2 << 8);
}
