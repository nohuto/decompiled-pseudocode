/*
 * XREFs of sub_18003D6A8 @ 0x18003D6A8
 * Callers:
 *     sub_18003E184 @ 0x18003E184 (sub_18003E184.c)
 * Callees:
 *     sub_180023FEC @ 0x180023FEC (sub_180023FEC.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_18003D5F4 @ 0x18003D5F4 (sub_18003D5F4.c)
 *     sub_18003D63C @ 0x18003D63C (sub_18003D63C.c)
 *     sub_18003D67C @ 0x18003D67C (sub_18003D67C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003D6A8(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = a1 + 16;
  if ( a2 )
    v5 = *(_DWORD *)(a2 + 32);
  else
    v5 = 1;
  sub_180028540(v4, v5);
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
