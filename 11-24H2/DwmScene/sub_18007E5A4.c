/*
 * XREFs of sub_18007E5A4 @ 0x18007E5A4
 * Callers:
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_18007E508 @ 0x18007E508 (sub_18007E508.c)
 *     sub_18007E8D0 @ 0x18007E8D0 (sub_18007E8D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     unknown_libname_83 @ 0x180017608 (unknown_libname_83.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001D780 @ 0x18001D780 (sub_18001D780.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004C8B4 @ 0x18004C8B4 (sub_18004C8B4.c)
 *     sub_18004D354 @ 0x18004D354 (sub_18004D354.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18007E4A4 @ 0x18007E4A4 (sub_18007E4A4.c)
 */

// Hidden C++ exception states: #wind=17
char __fastcall sub_18007E5A4(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
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
    sub_180017054((__int64)&v20, a1[2] + 496LL);
    unknown_libname_83(a2, (__int64)&v20);
    sub_180011B5C((__int64)&v20);
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
    sub_180011B5C((__int64)&v20);
  }
  sub_18005BDF4(a1[2], &v20);
  sub_18004C8B4(v20, (__int64 *)v18, a3);
  sub_18004D354(v28, (__int64 **)v18);
  v9 = sub_18001B610(v19, (__int64)a2, (__int64)"/");
  v10 = sub_18001D780((__int64)v30, (__int64)v9, (__int64)a4);
  v11 = sub_18001B5A8((__int64)v29, v10, (__int64)"/");
  sub_18001D780((__int64)v22, v11, (__int64)v28);
  sub_180011B5C((__int64)v29);
  sub_180011B5C((__int64)v30);
  sub_180011B5C((__int64)v19);
  sub_18001B610(v27, (__int64)v22, (__int64)"/Vertex");
  sub_18001B610(v26, (__int64)v22, (__int64)"/Pixel");
  sub_18001B610(v25, (__int64)v22, (__int64)"/Geometry");
  sub_18001B610(v24, (__int64)v22, (__int64)"/Domain");
  sub_18001B610(v23, (__int64)v22, (__int64)"/Hull");
  v12 = sub_180017054((__int64)v19, (__int64)v27);
  sub_18007E4A4(a1, 1, v12);
  v13 = sub_180017054((__int64)v19, (__int64)v26);
  sub_18007E4A4(a1, 5, v13);
  v14 = sub_180017054((__int64)v19, (__int64)v25);
  sub_18007E4A4(a1, 4, v14);
  v15 = sub_180017054((__int64)v19, (__int64)v24);
  sub_18007E4A4(a1, 3, v15);
  v16 = sub_180017054((__int64)v19, (__int64)v23);
  sub_18007E4A4(a1, 2, v16);
  sub_180011B5C((__int64)v23);
  sub_180011B5C((__int64)v24);
  sub_180011B5C((__int64)v25);
  sub_180011B5C((__int64)v26);
  sub_180011B5C((__int64)v27);
  sub_180011B5C((__int64)v22);
  sub_180011B5C((__int64)v28);
  sub_18004A654(v18, (__int64)v18);
  if ( v21 )
    sub_18001060C(v21);
  sub_180011B5C((__int64)a2);
  return sub_180011B5C((__int64)a4);
}
