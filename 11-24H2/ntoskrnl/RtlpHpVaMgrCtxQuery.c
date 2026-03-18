/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x1402C27C8
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x1402B3750 (ExGetHeapFromVA.c)
 *     RtlpHpSegMgrRelease @ 0x1402BCD10 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402C0D68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402C1530 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402C2AA8 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1402C2BFC (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B72670 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1402C28B4 (RtlCSparseBitmapFindBitSetCapped.c)
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
