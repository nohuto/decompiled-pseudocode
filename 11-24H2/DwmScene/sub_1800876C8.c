/*
 * XREFs of sub_1800876C8 @ 0x1800876C8
 * Callers:
 *     sub_180088870 @ 0x180088870 (sub_180088870.c)
 *     sub_180088A00 @ 0x180088A00 (sub_180088A00.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 */

_QWORD *__fastcall sub_1800876C8(_QWORD *a1, _QWORD *a2, float a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r9
  __int64 v5; // r10
  _QWORD *result; // rax
  __int64 v7; // r11
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  unknown_libname_81(a1, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(float *)(v3 + 32) = a3;
  *(_DWORD *)(v3 + 36) = 0;
  v8 = 1LL;
  sub_18002B7C0(v3 + 40, (__int64)&v8);
  v4[6] = v5;
  result = v4;
  v4[14] = v7;
  v4[22] = v7;
  return result;
}
