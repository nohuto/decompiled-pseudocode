/*
 * XREFs of sub_180017138 @ 0x180017138
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180017138(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rdi

  *a1 = 0LL;
  v2 = qword_1801C3438;
  v3 = *(_QWORD *)(qword_1801C3438 + 40);
  v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 1048LL);
  sub_18000E854(a1);
  v4(v3, *(_QWORD *)(v2 + 48), a1);
  return a1;
}
