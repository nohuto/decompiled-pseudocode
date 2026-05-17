/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x18014C644
 * Callers:
 *     RtlpSetSegmentInfo @ 0x1800969D0 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAffinitySlotAssign(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(v5, 0, sizeof(v5));
  WORD3(v5[0]) = 4153;
  v7 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v3, 132098LL, 20LL, v5);
}
