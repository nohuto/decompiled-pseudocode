/*
 * XREFs of sub_180049780 @ 0x180049780
 * Callers:
 *     sub_180014170 @ 0x180014170 (sub_180014170.c)
 *     sub_180047D90 @ 0x180047D90 (sub_180047D90.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 *     sub_180091560 @ 0x180091560 (sub_180091560.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180049780(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v8, a2);
  result = sub_1800497C4(v5, v4, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
