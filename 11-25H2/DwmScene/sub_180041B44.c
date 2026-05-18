/*
 * XREFs of sub_180041B44 @ 0x180041B44
 * Callers:
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007C3F8 @ 0x18007C3F8 (sub_18007C3F8.c)
 */

__int64 __fastcall sub_180041B44(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C3F8(v4, v5, v3);
}
