/*
 * XREFs of sub_180054E9C @ 0x180054E9C
 * Callers:
 *     sub_18005429C @ 0x18005429C (sub_18005429C.c)
 *     sub_1800549CC @ 0x1800549CC (sub_1800549CC.c)
 *     sub_18005677C @ 0x18005677C (sub_18005677C.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_180054E9C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  unknown_libname_81((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  return v2;
}
