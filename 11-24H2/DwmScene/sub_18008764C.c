/*
 * XREFs of sub_18008764C @ 0x18008764C
 * Callers:
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001C0F0 @ 0x18001C0F0 (sub_18001C0F0.c)
 *     sub_180087720 @ 0x180087720 (sub_180087720.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008764C(__int64 a1, __int64 a2)
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
  sub_180087720(a1 + 56, a2 + 56);
  sub_18001C0F0(a1 + 120, a2 + 120);
  return a1;
}
