/*
 * XREFs of sub_18002C1EC @ 0x18002C1EC
 * Callers:
 *     sub_18002E8C8 @ 0x18002E8C8 (sub_18002E8C8.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800CFAF0 @ 0x1800CFAF0 (sub_1800CFAF0.c)
 */

__int64 __fastcall sub_18002C1EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  unsigned int *v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_1800CFAF0(v5, *v4, v3);
}
