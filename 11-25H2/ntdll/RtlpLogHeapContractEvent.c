/*
 * XREFs of RtlpLogHeapContractEvent @ 0x18009B2A8
 * Callers:
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x1800E1200 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18009B36C (RtlpEstimateAllocatedSize.c)
 *     GetUCBytes @ 0x18009B3A8 (GetUCBytes.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapContractEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        HANDLE TraceHandle)
{
  __int64 v8; // r8
  char v9; // r9
  __int64 UCBytes; // rax
  __int128 Fields; // [rsp+20h] [rbp-41h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h]
  __int64 v14; // [rsp+50h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  int v18; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+74h] [rbp+13h]

  v15 = a4;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v14 = a2;
  v19 = RtlpEstimateAllocatedSize(a1, a2, a3, 0LL, 0LL, 0LL, 0LL, 0LL, a1);
  if ( a5 != v9 )
    v8 -= a6;
  v13 = v8;
  UCBytes = GetUCBytes(a1, &v17, &v18);
  v16 = v17 - *(_QWORD *)(a1 + 664) - UCBytes;
  WORD3(Fields) = 4138;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, &Fields);
}
