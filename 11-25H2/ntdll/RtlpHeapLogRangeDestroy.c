/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800B9128
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(v3, 0, sizeof(v3));
  WORD3(v3[0]) = 616;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v1 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v1, 132098LL, 8LL, v3);
}
