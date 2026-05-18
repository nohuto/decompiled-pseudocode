/*
 * XREFs of sub_180054CDC @ 0x180054CDC
 * Callers:
 *     sub_18002C210 @ 0x18002C210 (sub_18002C210.c)
 *     sub_180054408 @ 0x180054408 (sub_180054408.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_180087760 @ 0x180087760 (sub_180087760.c)
 *     sub_18008CD48 @ 0x18008CD48 (sub_18008CD48.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180027ADC @ 0x180027ADC (sub_180027ADC.c)
 *     sub_1800584E0 @ 0x1800584E0 (sub_1800584E0.c)
 *     sub_180078240 @ 0x180078240 (sub_180078240.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180054CDC(__int64 a1, __int64 a2)
{
  volatile __int32 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  std::string::string(v9, "Camera");
  sub_180078240(a1, v9, a2);
  sub_180011B5C((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_OWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v4 = (volatile __int32 *)(a1 + 280);
  sub_180027ADC(a1 + 280, 4LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180054CA0);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = 1065353216;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 448) = v5;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  sub_180027ADC(a1 + 548, 256LL, 4LL, sub_180054BF0);
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 1616) = v6;
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_1801BA6A0;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_1800584E0(a1);
  while ( v4 != (volatile __int32 *)(a1 + 292) )
    _InterlockedExchange(v4++, 0);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    sub_18001060C(v7);
  return a1;
}
