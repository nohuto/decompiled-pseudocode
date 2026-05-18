/*
 * XREFs of sub_1800B612C @ 0x1800B612C
 * Callers:
 *     sub_1800B9A90 @ 0x1800B9A90 (sub_1800B9A90.c)
 *     sub_1800BAFF0 @ 0x1800BAFF0 (sub_1800BAFF0.c)
 *     sub_1800BB110 @ 0x1800BB110 (sub_1800BB110.c)
 *     sub_1800CB550 @ 0x1800CB550 (sub_1800CB550.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800B612C(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E854(a2);
  return v4(v3, &unk_18018A430, a2);
}
