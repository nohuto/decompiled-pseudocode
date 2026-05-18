/*
 * XREFs of sub_180078E68 @ 0x180078E68
 * Callers:
 *     sub_180078568 @ 0x180078568 (sub_180078568.c)
 *     sub_180078C04 @ 0x180078C04 (sub_180078C04.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_180078E68(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  unknown_libname_81(a1, a2);
  unknown_libname_81((_QWORD *)(v3 + 16), (_QWORD *)(v2 + 16));
  result = v5;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 32);
  return result;
}
