/*
 * XREFs of sub_180051A70 @ 0x180051A70
 * Callers:
 *     sub_1800BF624 @ 0x1800BF624 (sub_1800BF624.c)
 * Callees:
 *     sub_18004E834 @ 0x18004E834 (sub_18004E834.c)
 *     sub_180052038 @ 0x180052038 (sub_180052038.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051A70(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, __int64, __int64); // rbx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v5 = sub_180052038(v7, a2, 0LL, 0LL);
  v4(a1, a2, v5);
  return sub_18004E834((__int64)v8);
}
