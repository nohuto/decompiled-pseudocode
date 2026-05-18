/*
 * XREFs of sub_18007E444 @ 0x18007E444
 * Callers:
 *     sub_18005B47C @ 0x18005B47C (sub_18005B47C.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_18007E3A8 @ 0x18007E3A8 (sub_18007E3A8.c)
 *     sub_18007E770 @ 0x18007E770 (sub_18007E770.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     unknown_libname_83 @ 0x180017548 (unknown_libname_83.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C754 @ 0x18004C754 (sub_18004C754.c)
 *     sub_18004D1F4 @ 0x18004D1F4 (sub_18004D1F4.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 *     sub_18007E344 @ 0x18007E344 (sub_18007E344.c)
 */

// Hidden C++ exception states: #wind=17
char __fastcall sub_18007E444(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  char *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *v18[4]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v19[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v24[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v25[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v26[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v27[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v28[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v29[32]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v30[32]; // [rsp+188h] [rbp+88h] BYREF

  v18[2] = a2;
  v18[3] = a4;
  if ( !a2[2] )
  {
    sub_180016F54((__int64)&v20, a1[2] + 496LL);
    unknown_libname_83(a2, (__int64)&v20);
    sub_180011A5C((__int64)&v20);
  }
  if ( !a4[2] )
  {
    switch ( *(_DWORD *)(a1[2] + 552LL) )
    {
      case 1:
        v8 = "ShaderModel50";
        break;
      case 2:
        v8 = "ShaderModel41";
        break;
      case 3:
        v8 = "ShaderModel40";
        break;
      case 4:
        v8 = "ShaderModel40_Level93";
        break;
      case 5:
        v8 = "ShaderModel40_Level91";
        break;
      default:
        v8 = "<invalid>";
        break;
    }
    std::string::string(&v20, v8);
    unknown_libname_83(a4, (__int64)&v20);
    sub_180011A5C((__int64)&v20);
  }
  sub_18005BC94(a1[2], &v20);
  sub_18004C754(v20, (__int64 *)v18, a3);
  sub_18004D1F4(v28, (__int64 **)v18);
  v9 = sub_18001B4B0(v19, (__int64)a2, (__int64)"/");
  v10 = sub_18001D620((__int64)v30, (__int64)v9, (__int64)a4);
  v11 = sub_18001B448((__int64)v29, v10, (__int64)"/");
  sub_18001D620((__int64)v22, v11, (__int64)v28);
  sub_180011A5C((__int64)v29);
  sub_180011A5C((__int64)v30);
  sub_180011A5C((__int64)v19);
  sub_18001B4B0(v27, (__int64)v22, (__int64)"/Vertex");
  sub_18001B4B0(v26, (__int64)v22, (__int64)"/Pixel");
  sub_18001B4B0(v25, (__int64)v22, (__int64)"/Geometry");
  sub_18001B4B0(v24, (__int64)v22, (__int64)"/Domain");
  sub_18001B4B0(v23, (__int64)v22, (__int64)"/Hull");
  v12 = sub_180016F54((__int64)v19, (__int64)v27);
  sub_18007E344(a1, 1, v12);
  v13 = sub_180016F54((__int64)v19, (__int64)v26);
  sub_18007E344(a1, 5, v13);
  v14 = sub_180016F54((__int64)v19, (__int64)v25);
  sub_18007E344(a1, 4, v14);
  v15 = sub_180016F54((__int64)v19, (__int64)v24);
  sub_18007E344(a1, 3, v15);
  v16 = sub_180016F54((__int64)v19, (__int64)v23);
  sub_18007E344(a1, 2, v16);
  sub_180011A5C((__int64)v23);
  sub_180011A5C((__int64)v24);
  sub_180011A5C((__int64)v25);
  sub_180011A5C((__int64)v26);
  sub_180011A5C((__int64)v27);
  sub_180011A5C((__int64)v22);
  sub_180011A5C((__int64)v28);
  sub_18004A4F4(v18, (__int64)v18);
  if ( v21 )
    sub_18001050C(v21);
  sub_180011A5C((__int64)a2);
  return sub_180011A5C((__int64)a4);
}
