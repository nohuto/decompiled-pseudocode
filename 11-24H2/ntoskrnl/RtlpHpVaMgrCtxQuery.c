/*
 * XREFs of RtlpHpVaMgrCtxQuery @ 0x14035D9AC
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x14035C310 (ExGetHeapFromVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14035CE60 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14035D390 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14035D4AC (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035D894 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrRelease @ 0x140364450 (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14035DA98 (RtlCSparseBitmapFindBitSetCapped.c)
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
