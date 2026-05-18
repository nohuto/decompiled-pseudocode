/*
 * XREFs of sub_18004D954 @ 0x18004D954
 * Callers:
 *     sub_18004D668 @ 0x18004D668 (sub_18004D668.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 *     sub_180098804 @ 0x180098804 (sub_180098804.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004D954(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v9, "LightProbe");
  sub_1800780E0(a1, v9, a2);
  sub_180011A5C((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_1800F7610;
  sub_1800984C8(a1 + 108);
  sub_180098804(a1 + 256, v4, v5, v6);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v7 = sub_180078418(a1);
  sub_180015E64(v7, (_QWORD *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_1800F7600;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
