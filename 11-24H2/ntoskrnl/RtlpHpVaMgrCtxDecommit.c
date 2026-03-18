/*
 * XREFs of RtlpHpVaMgrCtxDecommit @ 0x140605AF0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x140420FB8 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x1402C276C (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x140605D70 (RtlpHpVaMgrRangeDecommit.c)
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
