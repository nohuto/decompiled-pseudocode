/*
 * XREFs of sub_180030E70 @ 0x180030E70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18002BB54 @ 0x18002BB54 (sub_18002BB54.c)
 *     sub_180030D14 @ 0x180030D14 (sub_180030D14.c)
 *     sub_180039C88 @ 0x180039C88 (sub_180039C88.c)
 *     sub_18003DEB4 @ 0x18003DEB4 (sub_18003DEB4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180030E70(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  _BYTE v15[16]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp+17h] BYREF

  sub_18002863C(*a2 + 16, (__int64)v15);
  v4 = *a2;
  v5 = sub_180012444((__int64)v16, (__int64)&unk_1801C5058);
  std::string::string(v17, "DefaultCamera");
  v6 = sub_180039C88(v17);
  sub_18003DEB4(v4, &v13, v6, v5, v16);
  sub_180011B5C((__int64)v17);
  sub_18002BB54(v13, &v11);
  std::string::string(v17, "DefaultCamera");
  v7 = v11;
  sub_1800133F4(v11 + 24, (__int64)v17);
  sub_180011B5C((__int64)v17);
  *(_BYTE *)(v7 + 72) = 0;
  v8 = unknown_libname_81(&v10, &v11);
  sub_180030D14(a1, v8);
  if ( v12 )
    sub_18001060C(v12);
  if ( v14 )
    sub_18001060C(v14);
  return sub_180011044((__int64)v15);
}
