/*
 * XREFs of sub_180044C7C @ 0x180044C7C
 * Callers:
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_180046164 @ 0x180046164 (sub_180046164.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 *     sub_18004637C @ 0x18004637C (sub_18004637C.c)
 *     sub_1800464F4 @ 0x1800464F4 (sub_1800464F4.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 *     sub_1800468DC @ 0x1800468DC (sub_1800468DC.c)
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046BD0 @ 0x180046BD0 (sub_180046BD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 */

_QWORD *__fastcall sub_180044C7C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = sub_180016F54((__int64)v10, a2);
  sub_180068574((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  sub_180011A5C(a2);
  return a1;
}
