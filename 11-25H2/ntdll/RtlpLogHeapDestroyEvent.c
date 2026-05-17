/*
 * XREFs of RtlpLogHeapDestroyEvent @ 0x1800B7B0C
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 * Callees:
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapDestroyEvent(__int64 a1, __int64 a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(v3, 0, sizeof(v3));
  WORD3(v3[0]) = 4131;
  return NtTraceEvent(a2, 1026LL, 8LL, v3);
}
