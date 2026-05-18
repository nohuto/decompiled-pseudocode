/*
 * XREFs of sub_18003173C @ 0x18003173C
 * Callers:
 *     sub_180018120 @ 0x180018120 (sub_180018120.c)
 *     sub_180033460 @ 0x180033460 (sub_180033460.c)
 * Callees:
 *     sub_1800316BC @ 0x1800316BC (sub_1800316BC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003173C(__int64 *a1, __int64 *a2)
{
  sub_1800316BC(a1, a2);
  (*(void (__fastcall **)(__int64 *, __int64 *))(*a1 + 80))(a1, a2);
  return a2;
}
