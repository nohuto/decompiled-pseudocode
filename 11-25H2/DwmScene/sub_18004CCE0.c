/*
 * XREFs of sub_18004CCE0 @ 0x18004CCE0
 * Callers:
 *     sub_180017CD0 @ 0x180017CD0 (sub_180017CD0.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_1800630DC @ 0x1800630DC (sub_1800630DC.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_18008B630 @ 0x18008B630 (sub_18008B630.c)
 *     sub_180091BF4 @ 0x180091BF4 (sub_180091BF4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004D530 @ 0x18004D530 (sub_18004D530.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004CCE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[2] = a3;
  v5 = (__int64 *)(a1 + 18560);
  sub_18004D530(a1 + 18560, v8, a3);
  if ( v8[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = sub_18004A808(v5, (__int64)v8, a3);
    unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)v6 + 64LL));
  }
  sub_180011A5C(a3);
  return a2;
}
