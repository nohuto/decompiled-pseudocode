/*
 * XREFs of sub_180097170 @ 0x180097170
 * Callers:
 *     sub_1800954C0 @ 0x1800954C0 (sub_1800954C0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180097170(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  sub_180096798(a1);
  sub_180096798(v4 + 176);
  sub_180096798(a1 + 352);
  sub_180096798(a1 + 528);
  sub_180096798(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v5 = sub_18001B1F8(464LL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 880) = v5;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_180029BC0(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
