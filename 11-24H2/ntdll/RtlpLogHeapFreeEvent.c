/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x180095BD4
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapFreeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(v5, 0, sizeof(v5));
  v7 = a2;
  WORD3(v5[0]) = 4132;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v3, 132098LL, 20LL, v5);
}
