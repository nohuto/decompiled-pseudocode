/*
 * XREFs of sub_180054FFC @ 0x180054FFC
 * Callers:
 *     sub_1800543FC @ 0x1800543FC (sub_1800543FC.c)
 *     sub_180054B2C @ 0x180054B2C (sub_180054B2C.c)
 *     sub_1800568DC @ 0x1800568DC (sub_1800568DC.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_180054FFC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  unknown_libname_81((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  return v2;
}
