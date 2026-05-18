/*
 * XREFs of sub_1800BC2CC @ 0x1800BC2CC
 * Callers:
 *     sub_1800BD0B0 @ 0x1800BD0B0 (sub_1800BD0B0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800BC2CC(__int64 (__fastcall ****a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, void *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  sub_18000E954(a2);
  return v4(v3, &unk_18018B6A0, a2);
}
