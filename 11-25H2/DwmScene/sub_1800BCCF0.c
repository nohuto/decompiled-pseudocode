/*
 * XREFs of sub_1800BCCF0 @ 0x1800BCCF0
 * Callers:
 *     sub_180011150 @ 0x180011150 (sub_180011150.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_18002ABC4 @ 0x18002ABC4 (sub_18002ABC4.c)
 *     sub_180069048 @ 0x180069048 (sub_180069048.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BCCF0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 *v7; // r9
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  _OWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]

  result = sub_1800BD804(a1, &v9);
  if ( v9 )
  {
    v3 = std::string::string(v11, "RenderOutput DepthBuffer");
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800C8968((unsigned int)&v12, (unsigned int)&v9, v5, v4, (__int64)v3);
    sub_180023410(*(__int64 **)(v9 + 3648), &v8);
    v6 = unknown_libname_81(v11, &v12);
    sub_180069048(v7, v6, 0);
    v11[0] = v8;
    v8 = 0LL;
    result = (__int64)sub_18002ABC4(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      result = sub_18001050C(*((__int64 *)&v8 + 1));
    if ( v13 )
      result = sub_18001050C(v13);
  }
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
