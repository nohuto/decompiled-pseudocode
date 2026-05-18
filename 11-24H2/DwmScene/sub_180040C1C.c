/*
 * XREFs of sub_180040C1C @ 0x180040C1C
 * Callers:
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18002768C @ 0x18002768C (sub_18002768C.c)
 *     sub_180027920 @ 0x180027920 (sub_180027920.c)
 *     sub_180040BC8 @ 0x180040BC8 (sub_180040BC8.c)
 *     sub_180040D18 @ 0x180040D18 (sub_180040D18.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040C1C(__int64 *a1, __int64 a2, _WORD *a3)
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

  sub_180040BC8(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_WORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001CD64();
    v15 = v5;
    v6 = *a1;
    *(_QWORD *)&v12 = a1;
    v7 = sub_18002768C(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    sub_180040D18(v9, v8 + 28, v10, &v15);
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    *(_QWORD *)(v8 + 16) = v6;
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_180027920((__int64)&v12);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v12, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
