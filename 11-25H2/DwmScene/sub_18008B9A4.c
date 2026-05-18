/*
 * XREFs of sub_18008B9A4 @ 0x18008B9A4
 * Callers:
 *     sub_18005DA3C @ 0x18005DA3C (sub_18005DA3C.c)
 *     sub_18008B97C @ 0x18008B97C (sub_18008B97C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008B9A4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  std::string::string(v6, "Aimer");
  sub_1800780E0(a1, (__int64)v6, a2);
  sub_180011A5C((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180105F78;
  v4 = a2[1];
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
