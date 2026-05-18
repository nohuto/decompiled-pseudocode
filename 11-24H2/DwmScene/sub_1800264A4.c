/*
 * XREFs of sub_1800264A4 @ 0x1800264A4
 * Callers:
 *     sub_180010B9C @ 0x180010B9C (sub_180010B9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001CF40 @ 0x18001CF40 (sub_18001CF40.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_1800278AC @ 0x1800278AC (sub_1800278AC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800264A4(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  void *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[32]; // [rsp+50h] [rbp-38h] BYREF

  sub_1800278AC(a1, 10LL, 3LL);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)(a1 + 120) = v2;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  _InterlockedIncrement(&dword_1801C4488);
  v3 = sub_18001CF40((unsigned int *)&dword_1801C4488);
  v4 = (void *)sub_1800275D0(v8, v3);
  v5 = sub_18001B678((__int64)v7, (__int64)"FrameBuffer", v4);
  sub_180027D84(a1, v5);
  sub_180011B5C((__int64)v8);
  return a1;
}
