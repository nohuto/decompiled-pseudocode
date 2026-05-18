/*
 * XREFs of sub_18004A968 @ 0x18004A968
 * Callers:
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18003D0C4 @ 0x18003D0C4 (sub_18003D0C4.c)
 *     sub_18004ACBC @ 0x18004ACBC (sub_18004ACBC.c)
 *     sub_18004B75C @ 0x18004B75C (sub_18004B75C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004A968(__int64 *a1, __int64 a2, __int64 a3)
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

  sub_18001B9BC((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18001BA80(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x333333333333333LL )
      sub_18001CD64();
    v17 = a3;
    v8 = *a1;
    *(_QWORD *)&v14 = a1;
    v9 = sub_18003D0C4(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    sub_18004ACBC(v11, v10 + 32, v12, &v17);
    *(_QWORD *)v10 = v8;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)(v10 + 16) = v8;
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_18004B75C(&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
