/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x1800937AC
 * Callers:
 *     RtlpHpSegSegmentInitialize @ 0x180090724 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x180092A9C (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpQueryVA @ 0x180093EA8 (RtlpHpQueryVA.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlSparseArrayElementAllocated @ 0x180093300 (RtlSparseArrayElementAllocated.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v7 = *(_QWORD *)(v6 + 24);
    else
      v7 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v7 << 20;
    v8 = *(unsigned __int8 *)(v6 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v8 + 46) >> 1) & 7;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v8 + 45);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    return 0LL;
  }
  else
  {
    RtlpLogHeapFailure(22, a2, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
