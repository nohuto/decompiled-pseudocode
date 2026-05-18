/*
 * XREFs of sub_1800BC1BC @ 0x1800BC1BC
 * Callers:
 *     sub_1800BE170 @ 0x1800BE170 (sub_1800BE170.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BC1BC(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E854(a2);
  return v4(v3, &unk_18018A690, a2);
}
