/*
 * XREFs of sub_180076DD0 @ 0x180076DD0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043D74 @ 0x180043D74 (sub_180043D74.c)
 */

__int64 __fastcall sub_180076DD0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 56);
  v4 = unknown_libname_81(v9, (_QWORD *)(a1 + 56));
  sub_1800424B8(a2, (__int64)v4);
  v5 = unknown_libname_81(v9, v2);
  sub_180043314(a2, (__int64)v5);
  v6 = unknown_libname_81(v9, v2);
  sub_180043870(a2, (__int64)v6);
  v7 = unknown_libname_81(v9, v2);
  return sub_180043D74(a2, (__int64)v7);
}
