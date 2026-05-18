/*
 * XREFs of sub_18004A808 @ 0x18004A808
 * Callers:
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18003CF64 @ 0x18003CF64 (sub_18003CF64.c)
 *     sub_18004AB5C @ 0x18004AB5C (sub_18004AB5C.c)
 *     sub_18004B5FC @ 0x18004B5FC (sub_18004B5FC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004A808(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  sub_18001B85C((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18001B920(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x333333333333333LL )
      sub_18001CC04();
    v17 = a3;
    v8 = *a1;
    *(_QWORD *)&v14 = a1;
    v9 = sub_18003CF64(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    sub_18004AB5C(v11, v10 + 32, v12, &v17);
    *(_QWORD *)v10 = v8;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)(v10 + 16) = v8;
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_18004B5FC(&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
