/*
 * XREFs of sub_1800402C4 @ 0x1800402C4
 * Callers:
 *     sub_18001200C @ 0x18001200C (sub_18001200C.c)
 *     sub_18004029C @ 0x18004029C (sub_18004029C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18003AE74 @ 0x18003AE74 (sub_18003AE74.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800402C4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  std::string::string(v6, "Light");
  sub_1800780E0(a1, v6, a2);
  sub_180011A5C((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Light::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 120) = 1;
  *(_BYTE *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(_DWORD *)(a1 + 96) = 1065353216;
  *(_DWORD *)(a1 + 100) = 1065353216;
  *(_DWORD *)(a1 + 104) = 1065353216;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = 1135869952;
  *(_DWORD *)(a1 + 108) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  sub_18003AE74(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
