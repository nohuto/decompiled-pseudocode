/*
 * XREFs of sub_1800BCE20 @ 0x1800BCE20
 * Callers:
 *     sub_1800BCF50 @ 0x1800BCF50 (sub_1800BCF50.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800107FC @ 0x1800107FC (sub_1800107FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180026710 @ 0x180026710 (sub_180026710.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800BCE20(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  _OWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]

  sub_1800BD804(a1, &v9);
  if ( v9 )
  {
    v4 = std::string::string(v11, "RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800BF168((unsigned int)&v12, (unsigned int)&v9, v6, v5, (__int64)a2, (__int64)v4);
    sub_1800107FC(*(_QWORD *)(v9 + 3648), &v8);
    sub_180026710(v8, &v12);
    v11[0] = v8;
    v8 = 0LL;
    sub_18002ACD0(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001050C(*((__int64 *)&v8 + 1));
    if ( v13 )
      sub_18001050C(v13);
  }
  if ( v10 )
    sub_18001050C(v10);
  return sub_18000E854(a2);
}
