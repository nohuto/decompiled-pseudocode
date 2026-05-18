/*
 * XREFs of sub_1800873C8 @ 0x1800873C8
 * Callers:
 *     sub_180088870 @ 0x180088870 (sub_180088870.c)
 *     sub_180088A00 @ 0x180088A00 (sub_180088A00.c)
 * Callees:
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 *     sub_1800D2644 @ 0x1800D2644 (sub_1800D2644.c)
 */

_QWORD *__fastcall sub_1800873C8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall ****v6)(_QWORD, __int64); // rax
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 (__fastcall ****)(_QWORD, __int64))sub_1800D2644(a1, &v8);
  sub_1800871D0(a1, a2, a3, v6);
  return a2;
}
