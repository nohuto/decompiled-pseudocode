/*
 * XREFs of sub_180046FF8 @ 0x180046FF8
 * Callers:
 *     sub_180013F9C @ 0x180013F9C (sub_180013F9C.c)
 *     sub_180046FD0 @ 0x180046FD0 (sub_180046FD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18003AFD4 @ 0x18003AFD4 (sub_18003AFD4.c)
 *     sub_180078240 @ 0x180078240 (sub_180078240.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180046FF8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  std::string::string(v6, "Bounds");
  sub_180078240(a1, v6, a2);
  sub_180011B5C((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  *(_DWORD *)(a1 + 104) = 1065353216;
  *(_DWORD *)(a1 + 108) = 1065353216;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  sub_18003AFD4(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
