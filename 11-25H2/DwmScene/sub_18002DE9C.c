/*
 * XREFs of sub_18002DE9C @ 0x18002DE9C
 * Callers:
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 *     sub_1800699F0 @ 0x1800699F0 (sub_1800699F0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010BFC @ 0x180010BFC (sub_180010BFC.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 *     sub_18002E428 @ 0x18002E428 (sub_18002E428.c)
 *     sub_18002FA24 @ 0x18002FA24 (sub_18002FA24.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DE9C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  _QWORD *v15; // [rsp+88h] [rbp+20h] BYREF

  sub_180010BFC(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      sub_18001CC04();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18002D5B0(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    sub_18002E428(v9, v8 + 32, v10, &v15);
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_18002FA24(&v12);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v12, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
