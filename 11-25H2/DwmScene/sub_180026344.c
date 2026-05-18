/*
 * XREFs of sub_180026344 @ 0x180026344
 * Callers:
 *     sub_180010A9C @ 0x180010A9C (sub_180010A9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_18001CDE0 @ 0x18001CDE0 (sub_18001CDE0.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_18002774C @ 0x18002774C (sub_18002774C.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180026344(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  void *v4; // rax
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[32]; // [rsp+50h] [rbp-38h] BYREF

  sub_18002774C(a1, 10LL, 3LL);
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
  _InterlockedIncrement(&dword_1801C3478);
  v3 = sub_18001CDE0((unsigned int *)&dword_1801C3478);
  v4 = (void *)sub_180027470(v8, v3);
  v5 = sub_18001B518((__int64)v7, (__int64)"FrameBuffer", v4);
  sub_180027C24(a1, v5);
  sub_180011A5C((__int64)v8);
  return a1;
}
