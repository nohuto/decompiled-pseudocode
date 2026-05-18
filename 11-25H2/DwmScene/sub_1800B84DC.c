/*
 * XREFs of sub_1800B84DC @ 0x1800B84DC
 * Callers:
 *     sub_18001565C @ 0x18001565C (sub_18001565C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_1800BABC0 @ 0x1800BABC0 (sub_1800BABC0.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800B84DC(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_180023F84(a1, a2, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 3800) = 0LL;
  *(_QWORD *)(a1 + 3808) = 0LL;
  v5 = sub_18002752C(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 3800) = v6;
  *(_QWORD *)(a1 + 3816) = 0LL;
  *(_QWORD *)(a1 + 3824) = 0LL;
  v7 = sub_18002752C(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 3816) = v8;
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 3832));
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
  sub_18001C99C(&stru_1801B84C8, 3);
  sub_18001C99C(&stru_1801B84C8, 3);
  sub_18001E574(a1 + 112, L"RenderDeviceD3D11", 0x11uLL);
  sub_18001E574(a1 + 80, L"<detached>", 0xAuLL);
  *(_QWORD *)(a1 + 3904) = 0LL;
  sub_1800BABC0(a1);
  v9 = a3[1];
  if ( v9 )
    sub_18001050C(v9);
  return a1;
}
