/*
 * XREFs of RtlpLogHeapSubSegmentAllocCached @ 0x1800021A4
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentAllocCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _BYTE v14[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v15; // [rsp+26h] [rbp-72h]
  __int64 v16; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+48h] [rbp-50h]
  __int64 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+58h] [rbp-40h]

  memset_thunk_772440563353939046(v14, 0, 0x40uLL);
  v16 = a1;
  v15 = 4145;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8, v10, v11) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v12, 132098LL, 32LL, v14);
}
