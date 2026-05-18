/*
 * XREFs of sub_180024CE0 @ 0x180024CE0
 * Callers:
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800231D4 @ 0x1800231D4 (sub_1800231D4.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180024CE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800231D4(a1, a2);
  v7 = *a2;
  v8 = sub_180016F54((__int64)v10, a4);
  sub_180027C24(v7, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
