/*
 * XREFs of sub_18004D168 @ 0x18004D168
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_1800846D0 @ 0x1800846D0 (sub_1800846D0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 */

__int64 __fastcall sub_18004D168(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C3F8(v4, v5, v3);
}
