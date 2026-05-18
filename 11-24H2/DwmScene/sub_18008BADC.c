/*
 * XREFs of sub_18008BADC @ 0x18008BADC
 * Callers:
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18008BB04 @ 0x18008BB04 (sub_18008BB04.c)
 */

__int64 __fastcall sub_18008BADC(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_18008BB04(v3, v2);
}
