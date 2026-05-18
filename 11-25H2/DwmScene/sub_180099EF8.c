/*
 * XREFs of sub_180099EF8 @ 0x180099EF8
 * Callers:
 *     sub_180099F98 @ 0x180099F98 (sub_180099F98.c)
 * Callees:
 *     sub_180099F60 @ 0x180099F60 (sub_180099F60.c)
 *     sub_18009A044 @ 0x18009A044 (sub_18009A044.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180099EF8(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)a1 = *a2;
  sub_180099F60(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18009A044(a1 + 24, v3, *(_QWORD *)(a1 + 8));
  return a1;
}
