/*
 * XREFs of sub_1800850A4 @ 0x1800850A4
 * Callers:
 *     sub_18005DA70 @ 0x18005DA70 (sub_18005DA70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180086A54 @ 0x180086A54 (sub_180086A54.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800850A4(__int64 a1, _QWORD *a2)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v5, "ColorTransform");
  sub_1800780E0(a1, (__int64)v5, a2);
  sub_180011A5C((__int64)v5);
  *(_QWORD *)a1 = &Spectre::Engine::ColorTransform::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  sub_180086A54(a1);
  return a1;
}
