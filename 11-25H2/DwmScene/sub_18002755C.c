/*
 * XREFs of sub_18002755C @ 0x18002755C
 * Callers:
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180051580 @ 0x180051580 (sub_180051580.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 *     sub_18007F930 @ 0x18007F930 (sub_18007F930.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_1800274D8 @ 0x1800274D8 (sub_1800274D8.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_180027654 @ 0x180027654 (sub_180027654.c)
 *     sub_1800277C0 @ 0x1800277C0 (sub_1800277C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002755C(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  _DWORD *v15; // [rsp+88h] [rbp+20h] BYREF

  sub_1800274D8(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_DWORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001CC04();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18002752C(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    sub_180027654(v9, v8 + 28, v10, &v15);
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_1800277C0(&v12);
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
