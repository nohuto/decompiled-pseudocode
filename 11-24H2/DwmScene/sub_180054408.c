/*
 * XREFs of sub_180054408 @ 0x180054408
 * Callers:
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180054CDC @ 0x180054CDC (sub_180054CDC.c)
 */

__int64 __fastcall sub_180054408(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = unknown_libname_81(v5, a2);
  return sub_180054CDC(v3, v2);
}
