/*
 * XREFs of sub_1800B863C @ 0x1800B863C
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_18001E6D4 @ 0x18001E6D4 (sub_18001E6D4.c)
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 *     sub_1800BAD20 @ 0x1800BAD20 (sub_1800BAD20.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800B863C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800240E4(a1, a2, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 3800) = 0LL;
  *(_QWORD *)(a1 + 3808) = 0LL;
  v5 = sub_18002768C(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 3800) = v6;
  *(_QWORD *)(a1 + 3816) = 0LL;
  *(_QWORD *)(a1 + 3824) = 0LL;
  v7 = sub_18002768C(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 3816) = v8;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 3832));
  *(_QWORD *)(a1 + 3864) = 6LL;
  *(_QWORD *)(a1 + 3872) = 0LL;
  *(_QWORD *)(a1 + 3880) = 0LL;
  *(_QWORD *)(a1 + 3888) = 0LL;
  *(_QWORD *)(a1 + 3896) = 0LL;
  *(_OWORD *)(a1 + 4216) = 0LL;
  *(_QWORD *)(a1 + 4232) = 0LL;
  *(_QWORD *)(a1 + 4240) = 7LL;
  *(_WORD *)(a1 + 4216) = 0;
  *(_QWORD *)(a1 + 4256) = 0LL;
  sub_18001CAFC(&stru_1801B94C8, 3);
  sub_18001CAFC(&stru_1801B94C8, 3);
  sub_18001E6D4(a1 + 112, L"RenderDeviceD3D11", 0x11uLL);
  sub_18001E6D4(a1 + 80, L"<detached>", 0xAuLL);
  *(_QWORD *)(a1 + 3904) = 0LL;
  sub_1800BAD20(a1);
  v9 = a3[1];
  if ( v9 )
    sub_18001060C(v9);
  return a1;
}
