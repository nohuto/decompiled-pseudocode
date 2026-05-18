/*
 * XREFs of sub_18003D74C @ 0x18003D74C
 * Callers:
 *     sub_18003E218 @ 0x18003E218 (sub_18003E218.c)
 * Callees:
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_18003D5F4 @ 0x18003D5F4 (sub_18003D5F4.c)
 *     sub_18003D63C @ 0x18003D63C (sub_18003D63C.c)
 *     sub_18003D67C @ 0x18003D67C (sub_18003D67C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003D74C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180028540(a1 + 16, 0);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18003D5F4((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_18003D67C(a1 + 120);
  sub_180023FEC((_QWORD *)(a1 + 184));
  *(_DWORD *)(a1 + 192) = 0;
  sub_18003D63C((__int64 *)(a1 + 200));
  return a1;
}
