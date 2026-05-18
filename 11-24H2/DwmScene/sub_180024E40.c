/*
 * XREFs of sub_180024E40 @ 0x180024E40
 * Callers:
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180023334 @ 0x180023334 (sub_180023334.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180024E40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_180023334(a1, a2);
  v7 = *a2;
  v8 = sub_180017054((__int64)v10, a4);
  sub_180027D84(v7, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
