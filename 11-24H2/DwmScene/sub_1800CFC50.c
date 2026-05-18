/*
 * XREFs of sub_1800CFC50 @ 0x1800CFC50
 * Callers:
 *     sub_18002C34C @ 0x18002C34C (sub_18002C34C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CFC50(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  unknown_libname_81((_QWORD *)(a1 + 32), a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 64));
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v6 = sub_18001B1F8(192LL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 96) = v6;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 112));
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v7 = sub_18001B1F8(104LL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v7;
  *(_DWORD *)(a1 + 160) = 0;
  v8 = a3[1];
  if ( v8 )
    sub_18001060C(v8);
  return a1;
}
