/*
 * XREFs of sub_1800CAD54 @ 0x1800CAD54
 * Callers:
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800CAD54(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E854(a2);
  return v4(v3, &unk_18018A6C0, a2);
}
