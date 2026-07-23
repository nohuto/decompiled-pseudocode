/*
 * XREFs of RtlpLogHeapContractEvent @ 0x1800F20F0
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpDecommitBlock @ 0x180117590 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800F21B4 (RtlpEstimateAllocatedSize.c)
 *     GetUCBytes @ 0x1800F21F0 (GetUCBytes.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
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
  _OWORD Fields[2]; // [rsp+20h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h]
  __int64 v14; // [rsp+48h] [rbp-19h]
  __int64 v15; // [rsp+50h] [rbp-11h]
  __int64 v16; // [rsp+58h] [rbp-9h]
  __int64 v17; // [rsp+60h] [rbp-1h]
  __int64 v18; // [rsp+68h] [rbp+7h] BYREF
  int v19; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+74h] [rbp+13h]

  v16 = a4;
  v13 = a1;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0;
  memset(Fields, 0, sizeof(Fields));
  v15 = a2;
  v20 = RtlpEstimateAllocatedSize(a1);
  if ( a5 != v9 )
    v8 -= a6;
  v14 = v8;
  UCBytes = GetUCBytes(a1, &v18, &v19);
  v17 = v18 - *(_QWORD *)(a1 + 672) - UCBytes;
  WORD3(Fields[0]) = 4138;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
