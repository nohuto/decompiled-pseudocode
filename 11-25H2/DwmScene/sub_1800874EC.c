/*
 * XREFs of sub_1800874EC @ 0x1800874EC
 * Callers:
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001BF90 @ 0x18001BF90 (sub_18001BF90.c)
 *     sub_1800875C0 @ 0x1800875C0 (sub_1800875C0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800874EC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  unknown_libname_81((_QWORD *)a1, (_QWORD *)a2);
  unknown_libname_81((_QWORD *)(v4 + 16), (_QWORD *)(v5 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  sub_1800875C0(a1 + 56, a2 + 56);
  sub_18001BF90(a1 + 120, a2 + 120);
  return a1;
}
