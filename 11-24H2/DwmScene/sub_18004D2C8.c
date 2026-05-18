/*
 * XREFs of sub_18004D2C8 @ 0x18004D2C8
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_180058644 @ 0x180058644 (sub_180058644.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_1800681B0 @ 0x1800681B0 (sub_1800681B0.c)
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18007C558 @ 0x18007C558 (sub_18007C558.c)
 */

__int64 __fastcall sub_18004D2C8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C558(v4, v5, v3);
}
