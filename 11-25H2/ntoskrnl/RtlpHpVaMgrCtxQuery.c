/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x1402FA31C
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     RtlpHpSegMgrRelease @ 0x1402E15FC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402F916C (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402F971C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402FA798 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402FA8EC (RtlpHpSegMgrVaCtxInitialize.c)
 *     ExGetHeapFromVA @ 0x1403C7CD0 (ExGetHeapFromVA.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B62670 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1402FA408 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxQuery(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = (a2 - *(_QWORD *)(a1 + 8)) >> 20;
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 32, 8 * (v6 << *(_DWORD *)(a1 + 24)), 8 * (1LL << *(_DWORD *)(a1 + 24))) == -1
    || (v7 = *(_QWORD *)(a1 + 40) + (v6 << *(_DWORD *)(a1 + 24))) == 0 )
  {
    RtlpLogHeapFailure(22, a2, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
  else
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v7 & 4) != 0 )
      v8 = *(_QWORD *)(v7 + 24);
    else
      v8 = *(unsigned __int16 *)(v7 + 24);
    *(_QWORD *)a3 = v8 << 20;
    v9 = *(unsigned __int8 *)(v7 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v9 + 46) >> 1) & 7;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v9 + 45);
    *(_QWORD *)(a3 + 16) = v7 + 8;
    return 0LL;
  }
}
