/*
 * XREFs of sub_180017238 @ 0x180017238
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180017238(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rdi

  *a1 = 0LL;
  v2 = qword_1801C4448;
  v3 = *(_QWORD *)(qword_1801C4448 + 40);
  v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 1048LL);
  sub_18000E954(a1);
  v4(v3, *(_QWORD *)(v2 + 48), a1);
  return a1;
}
