/*
 * XREFs of sub_1800784B0 @ 0x1800784B0
 * Callers:
 *     sub_180040710 @ 0x180040710 (sub_180040710.c)
 *     sub_180047230 @ 0x180047230 (sub_180047230.c)
 *     sub_1800484E0 @ 0x1800484E0 (sub_1800484E0.c)
 *     sub_18004E170 @ 0x18004E170 (sub_18004E170.c)
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 *     sub_180085560 @ 0x180085560 (sub_180085560.c)
 *     sub_18008BD40 @ 0x18008BD40 (sub_18008BD40.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800784B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  sub_1800133F4(*a2 + 24, a1 + 24);
  *(_BYTE *)(*a2 + 72) = *(_BYTE *)(a1 + 72);
  result = *a2;
  *(_DWORD *)(*a2 + 76) = *(_DWORD *)(a1 + 76);
  v5 = a2[1];
  if ( v5 )
    return sub_18001060C(v5);
  return result;
}
