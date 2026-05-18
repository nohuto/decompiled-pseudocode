/*
 * XREFs of sub_180097010 @ 0x180097010
 * Callers:
 *     sub_180095360 @ 0x180095360 (sub_180095360.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_180096638 @ 0x180096638 (sub_180096638.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180097010(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  sub_180096638(a1);
  sub_180096638(v4 + 176);
  sub_180096638(a1 + 352);
  sub_180096638(a1 + 528);
  sub_180096638(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v5 = sub_18001B098(464LL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 880) = v5;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_180029A60(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
