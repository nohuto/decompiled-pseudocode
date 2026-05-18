/*
 * XREFs of sub_18004B434 @ 0x18004B434
 * Callers:
 *     sub_18002C380 @ 0x18002C380 (sub_18002C380.c)
 * Callees:
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     sub_18001A8A4 @ 0x18001A8A4 (sub_18001A8A4.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002EEF0 @ 0x18002EEF0 (sub_18002EEF0.c)
 *     sub_18003D0C4 @ 0x18003D0C4 (sub_18003D0C4.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18004B434(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18002EEF0((__int64 *)(a1 + 16));
  sub_18000CD2C(a1 + 32, 32LL, 64LL, unknown_libname_82);
  *(_DWORD *)(a1 + 2080) = 0;
  v13 = a1 + 2088;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  v4 = sub_18001B1F8(72LL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 2088) = v4;
  sub_18000CD2C(a1 + 2104, 32LL, 512LL, unknown_libname_82);
  *(_DWORD *)(a1 + 18488) = 0;
  sub_180017054(a1 + 18496, (__int64)&unk_1801C8ED8);
  sub_180017054(a1 + 18528, (__int64)&unk_1801C9458);
  v13 = a1 + 18560;
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  v5 = sub_18003D0C4(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 18560) = v6;
  v13 = a1 + 18576;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  v7 = sub_18001B1F8(104LL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 18576) = v7;
  v13 = a1 + 18592;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v8 = sub_18003D0C4(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 18592) = v9;
  v13 = a1 + 18608;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 18608) = v10;
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  sub_18001A8A4(a1 + 18664, 1uLL);
  v11 = *(_DWORD **)(a1 + 18664);
  *v11 = 3;
  *(_QWORD *)(a1 + 18672) = v11 + 1;
  v13 = 0LL;
  sub_180017398(&v13);
  *(_QWORD *)(a1 + 18688) = a2;
  sub_180013918(a1 + 18456, "<invalid>", 9uLL);
  return a1;
}
