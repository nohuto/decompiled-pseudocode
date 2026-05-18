/*
 * XREFs of sub_1800BCE50 @ 0x1800BCE50
 * Callers:
 *     sub_180011250 @ 0x180011250 (sub_180011250.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180023570 @ 0x180023570 (sub_180023570.c)
 *     sub_18002AD24 @ 0x18002AD24 (sub_18002AD24.c)
 *     sub_1800691A8 @ 0x1800691A8 (sub_1800691A8.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BCE50(__int64 a1)
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

  result = sub_1800BD964(a1, &v9);
  if ( v9 )
  {
    v3 = std::string::string(v11, "RenderOutput DepthBuffer");
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800C8AC8((unsigned int)&v12, (unsigned int)&v9, v5, v4, (__int64)v3);
    sub_180023570(*(__int64 **)(v9 + 3648), &v8);
    v6 = unknown_libname_81(v11, &v12);
    sub_1800691A8(v7, v6, 0);
    v11[0] = v8;
    v8 = 0LL;
    result = (__int64)sub_18002AD24(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      result = sub_18001060C(*((__int64 *)&v8 + 1));
    if ( v13 )
      result = sub_18001060C(v13);
  }
  if ( v10 )
    return sub_18001060C(v10);
  return result;
}
