/*
 * XREFs of sub_1800BCF80 @ 0x1800BCF80
 * Callers:
 *     sub_1800BD0B0 @ 0x1800BD0B0 (sub_1800BD0B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800BCF80(__int64 a1, __int64 *a2)
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

  sub_1800BD964(a1, &v9);
  if ( v9 )
  {
    v4 = std::string::string(v11, "RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800BF2C8((unsigned int)&v12, (unsigned int)&v9, v6, v5, (__int64)a2, (__int64)v4);
    sub_1800108FC(*(_QWORD *)(v9 + 3648), &v8);
    sub_180026870(v8, &v12);
    v11[0] = v8;
    v8 = 0LL;
    sub_18002AE30(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      sub_18001060C(*((__int64 *)&v8 + 1));
    if ( v13 )
      sub_18001060C(v13);
  }
  if ( v10 )
    sub_18001060C(v10);
  return sub_18000E954(a2);
}
