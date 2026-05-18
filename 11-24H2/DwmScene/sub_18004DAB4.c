/*
 * XREFs of sub_18004DAB4 @ 0x18004DAB4
 * Callers:
 *     sub_18004D7C8 @ 0x18004D7C8 (sub_18004D7C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180078240 @ 0x180078240 (sub_180078240.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_180098628 @ 0x180098628 (sub_180098628.c)
 *     sub_180098964 @ 0x180098964 (sub_180098964.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004DAB4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v9, "LightProbe");
  sub_180078240(a1, v9, a2);
  sub_180011B5C((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_1800F8610;
  sub_180098628(a1 + 108);
  sub_180098964(a1 + 256, v4, v5, v6);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v7 = sub_180078578(a1);
  sub_180015F64(v7, (_QWORD *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_1800F8600;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
