/*
 * XREFs of sub_18004CE40 @ 0x18004CE40
 * Callers:
 *     sub_180017D90 @ 0x180017D90 (sub_180017D90.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_18006323C @ 0x18006323C (sub_18006323C.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_18008B790 @ 0x18008B790 (sub_18008B790.c)
 *     sub_180091D54 @ 0x180091D54 (sub_180091D54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004D690 @ 0x18004D690 (sub_18004D690.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004CE40(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[2] = a3;
  v5 = (__int64 *)(a1 + 18560);
  sub_18004D690(a1 + 18560, v8, a3);
  if ( v8[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = sub_18004A968(v5, (__int64)v8, a3);
    unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)v6 + 64LL));
  }
  sub_180011B5C(a3);
  return a2;
}
