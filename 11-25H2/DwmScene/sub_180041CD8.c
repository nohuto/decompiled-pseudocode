/*
 * XREFs of sub_180041CD8 @ 0x180041CD8
 * Callers:
 *     sub_180013670 @ 0x180013670 (sub_180013670.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 */

__int64 __fastcall sub_180041CD8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v7, a3);
  return sub_18007C5F8(v4, v5, v3);
}
