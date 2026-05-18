/*
 * XREFs of sub_180087568 @ 0x180087568
 * Callers:
 *     sub_180088710 @ 0x180088710 (sub_180088710.c)
 *     sub_1800888A0 @ 0x1800888A0 (sub_1800888A0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18002B660 @ 0x18002B660 (sub_18002B660.c)
 */

_QWORD *__fastcall sub_180087568(_QWORD *a1, _QWORD *a2, float a3)
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
  sub_18002B660(v3 + 40, (__int64)&v8);
  v4[6] = v5;
  result = v4;
  v4[14] = v7;
  v4[22] = v7;
  return result;
}
