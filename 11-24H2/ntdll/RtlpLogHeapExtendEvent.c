/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180044228
 * Callers:
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009D0A4 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800A03B0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateLowFragHeap @ 0x1800A93BC (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18004768C (RtlpEstimateAllocatedSize.c)
 *     GetUCBytes @ 0x1800476C8 (GetUCBytes.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 UCBytes; // rax
  __int128 v8; // [rsp+20h] [rbp-31h] BYREF
  __int64 v9; // [rsp+48h] [rbp-9h]
  __int64 v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+74h] [rbp+23h]

  v13 = 0LL;
  v12 = 0LL;
  v14 = 0;
  v9 = a3;
  v10 = a2;
  v11 = a4;
  v15 = RtlpEstimateAllocatedSize(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0LL, a1);
  UCBytes = GetUCBytes(a1, &v13, &v14);
  v12 = v13 - *(_QWORD *)(a1 + 664) - UCBytes;
  WORD3(v8) = 4133;
  return NtTraceEvent(a5, 1027LL, 60LL, &v8);
}
