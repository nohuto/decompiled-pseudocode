/*
 * XREFs of RtlpLogHeapCommit @ 0x1800235BC
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegSegmentAllocate @ 0x18009BC50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800E8614 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpHeapAllocate @ 0x1800EF054 (RtlpHpHeapAllocate.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
