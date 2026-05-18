/*
 * XREFs of sub_18009A058 @ 0x18009A058
 * Callers:
 *     sub_18009A0F8 @ 0x18009A0F8 (sub_18009A0F8.c)
 * Callees:
 *     sub_18009A0C0 @ 0x18009A0C0 (sub_18009A0C0.c)
 *     sub_18009A1A4 @ 0x18009A1A4 (sub_18009A1A4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009A058(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx

  *(_DWORD *)a1 = *a2;
  sub_18009A0C0(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_18009A1A4(a1 + 24, v3, *(_QWORD *)(a1 + 8));
  return a1;
}
