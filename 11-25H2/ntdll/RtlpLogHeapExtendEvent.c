/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180097F08
 * Callers:
 *     RtlpExtendLowFragHeapSegment @ 0x180026054 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18009B36C (RtlpEstimateAllocatedSize.c)
 *     GetUCBytes @ 0x18009B3A8 (GetUCBytes.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 UCBytes; // rax
  __int128 Fields; // [rsp+20h] [rbp-31h] BYREF
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
  WORD3(Fields) = 4133;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, &Fields);
}
