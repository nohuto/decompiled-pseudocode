/*
 * XREFs of sub_180087268 @ 0x180087268
 * Callers:
 *     sub_180088710 @ 0x180088710 (sub_180088710.c)
 *     sub_1800888A0 @ 0x1800888A0 (sub_1800888A0.c)
 * Callees:
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 *     sub_1800D24E4 @ 0x1800D24E4 (sub_1800D24E4.c)
 */

_QWORD *__fastcall sub_180087268(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall ****v6)(_QWORD, __int64); // rax
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 (__fastcall ****)(_QWORD, __int64))sub_1800D24E4(a1, &v8);
  sub_180087070(a1, a2, a3, v6);
  return a2;
}
