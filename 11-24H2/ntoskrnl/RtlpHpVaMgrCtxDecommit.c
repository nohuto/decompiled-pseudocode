/*
 * XREFs of RtlpHpVaMgrCtxDecommit @ 0x140603130
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x14045928C (RtlpHpFreeVA.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14035D950 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x1406033B0 (RtlpHpVaMgrRangeDecommit.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxDecommit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8[0] = a2;
  v8[1] = a3;
  return RtlpHpVaMgrRangeDecommit(a1 + 48 * (*(unsigned __int8 *)(v6 + 1) + 45LL), v6, v8);
}
