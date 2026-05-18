/*
 * XREFs of sub_180076C70 @ 0x180076C70
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_1800431B4 @ 0x1800431B4 (sub_1800431B4.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043C14 @ 0x180043C14 (sub_180043C14.c)
 */

__int64 __fastcall sub_180076C70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 56);
  v4 = unknown_libname_81(v9, (_QWORD *)(a1 + 56));
  sub_180042358(a2, (__int64)v4);
  v5 = unknown_libname_81(v9, v2);
  sub_1800431B4(a2, (__int64)v5);
  v6 = unknown_libname_81(v9, v2);
  sub_180043710(a2, (__int64)v6);
  v7 = unknown_libname_81(v9, v2);
  return sub_180043C14(a2, (__int64)v7);
}
