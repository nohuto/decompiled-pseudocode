/*
 * XREFs of RtlpLogHeapCommit @ 0x1801170C8
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180026054 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpHpHeapAllocate @ 0x1800349E4 (RtlpHpHeapAllocate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800BA444 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+26h] [rbp-72h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]

  memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
  v12 = a1;
  v11 = 4147;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v8 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
