/*
 * XREFs of sub_18003D548 @ 0x18003D548
 * Callers:
 *     sub_18003E024 @ 0x18003E024 (sub_18003E024.c)
 * Callees:
 *     sub_180023E8C @ 0x180023E8C (sub_180023E8C.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     sub_18003D494 @ 0x18003D494 (sub_18003D494.c)
 *     sub_18003D4DC @ 0x18003D4DC (sub_18003D4DC.c)
 *     sub_18003D51C @ 0x18003D51C (sub_18003D51C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003D548(__int64 a1, __int64 a2)
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
  sub_1800283E0(v4, v5);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18003D494((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_18003D51C(a1 + 120);
  sub_180023E8C((_QWORD *)(a1 + 184));
  *(_DWORD *)(a1 + 192) = 0;
  sub_18003D4DC((__int64 *)(a1 + 200));
  return a1;
}
