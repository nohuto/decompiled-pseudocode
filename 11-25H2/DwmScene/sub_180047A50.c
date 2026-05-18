/*
 * XREFs of sub_180047A50 @ 0x180047A50
 * Callers:
 *     sub_180013ED0 @ 0x180013ED0 (sub_180013ED0.c)
 *     sub_1800475B8 @ 0x1800475B8 (sub_1800475B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18003AE74 @ 0x18003AE74 (sub_18003AE74.c)
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 *     sub_180047618 @ 0x180047618 (sub_180047618.c)
 *     sub_180047778 @ 0x180047778 (sub_180047778.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180047A50(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  std::string::string(v9, "Mesh Instance");
  sub_1800780E0(a1, v9, a2);
  sub_180011A5C((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_1800F7660;
  sub_18003AE74(*a2, 3, 1);
  v4 = *(_QWORD *)(a1 + 104);
  v5 = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v4) >> 3);
  if ( v5 <= 1 )
  {
    if ( !v5 )
    {
      if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 120) - v4) >> 3) )
        *(_QWORD *)(a1 + 112) = sub_180047778(*(_QWORD *)(a1 + 112), 1 - v5);
      else
        sub_180047618((__int64 *)(a1 + 104), 1uLL, 0x2E8BA2E8BA2E8BA3LL);
    }
  }
  else
  {
    v6 = v4 + 88;
    sub_1800475E0(v4 + 88, *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = v6;
  }
  v7 = a2[1];
  if ( v7 )
    sub_18001050C(v7);
  return a1;
}
