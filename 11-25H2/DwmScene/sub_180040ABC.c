/*
 * XREFs of sub_180040ABC @ 0x180040ABC
 * Callers:
 *     sub_180041BF0 @ 0x180041BF0 (sub_180041BF0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_1800277C0 @ 0x1800277C0 (sub_1800277C0.c)
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 *     sub_180040BB8 @ 0x180040BB8 (sub_180040BB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040ABC(__int64 *a1, __int64 a2, _WORD *a3)
{
  _WORD *v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  _WORD *v15; // [rsp+88h] [rbp+20h] BYREF

  sub_180040A68(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_WORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001CC04();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18002752C(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    sub_180040BB8(v9, v8 + 28, v10, &v15);
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_1800277C0((__int64)&v12);
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
