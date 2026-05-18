/*
 * XREFs of sub_1800CB0C4 @ 0x1800CB0C4
 * Callers:
 *     sub_1800B7DC0 @ 0x1800B7DC0 (sub_1800B7DC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CB0C4(__int64 a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v11[0] = *a4;
  v11[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v13[0] = *a2;
  v13[1] = a2[1];
  sub_1800298C4(a1, (__int64)v13, v12, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 504) = v7;
  v8 = a3[1];
  if ( v8 )
    sub_18001060C(v8);
  v9 = a4[1];
  if ( v9 )
    sub_18001060C(v9);
  return a1;
}
