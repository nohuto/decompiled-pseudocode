/*
 * XREFs of RtlpLogHeapDecommit @ 0x1800E1620
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x1800E1200 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+26h] [rbp-72h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]

  memset_thunk_772440563353939046(v10, 0, 0x40uLL);
  v12 = a1;
  v11 = 4148;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v8 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v8, 132098LL, 32LL, v10);
}
