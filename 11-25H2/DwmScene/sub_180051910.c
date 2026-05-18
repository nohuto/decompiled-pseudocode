/*
 * XREFs of sub_180051910 @ 0x180051910
 * Callers:
 *     sub_1800BF4C4 @ 0x1800BF4C4 (sub_1800BF4C4.c)
 * Callees:
 *     sub_18004E6D4 @ 0x18004E6D4 (sub_18004E6D4.c)
 *     sub_180051ED8 @ 0x180051ED8 (sub_180051ED8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180051910(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, __int64, __int64); // rbx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v5 = sub_180051ED8(v7, a2, 0LL, 0LL);
  v4(a1, a2, v5);
  return sub_18004E6D4((__int64)v8);
}
