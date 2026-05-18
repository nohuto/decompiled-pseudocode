/*
 * XREFs of sub_18002E084 @ 0x18002E084
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18002D3F0 @ 0x18002D3F0 (sub_18002D3F0.c)
 *     sub_18002E374 @ 0x18002E374 (sub_18002E374.c)
 *     sub_18002FC0C @ 0x18002FC0C (sub_18002FC0C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E084(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  sub_18002D3F0(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *(_QWORD *)(v5 + 8) < *(_QWORD *)(v13 + 40) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      sub_18001CC04();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
    sub_18002E374(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_18002FC0C(&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
