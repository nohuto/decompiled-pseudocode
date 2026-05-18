/*
 * XREFs of sub_18008BB04 @ 0x18008BB04
 * Callers:
 *     sub_18005DB9C @ 0x18005DB9C (sub_18005DB9C.c)
 *     sub_18008BADC @ 0x18008BADC (sub_18008BADC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180078240 @ 0x180078240 (sub_180078240.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008BB04(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v6, "Aimer");
  sub_180078240(a1, (__int64)v6, a2);
  sub_180011B5C((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180106F78;
  v4 = a2[1];
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
