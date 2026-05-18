/*
 * XREFs of sub_180061D60 @ 0x180061D60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001E9EC @ 0x18001E9EC (sub_18001E9EC.c)
 *     sub_18001EADC @ 0x18001EADC (sub_18001EADC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800323E8 @ 0x1800323E8 (sub_1800323E8.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180063F0C @ 0x180063F0C (sub_180063F0C.c)
 *     sub_180064700 @ 0x180064700 (sub_180064700.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180067800 @ 0x180067800 (sub_180067800.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180061D60(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  char v14; // bl
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[40]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[4]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = unknown_libname_81(&v23, (_QWORD *)(a1 + 464));
  sub_18001E9EC(
    v29,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  std::string::string(v30, "PreRenderScene");
  v9 = sub_1800323E8(a1, &v25);
  sub_180015174(&v21, v9);
  sub_18002F2B4(v27, (__int64)&v21);
  if ( v22 )
    sub_180010544(v22);
  if ( v26 )
    sub_18001050C(v26);
  sub_180011A5C((__int64)v30);
  v10 = sub_1800323A0(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_180067800(v11, *a3, *a4, v10);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C69C8, v12);
  v14 = v13;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C69E8);
  LOBYTE(v15) = v14;
  sub_180062584(a1, a2, v15);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1409) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(
                            v10,
                            &unk_1801C6988,
                            0LL);
  sub_180064700(a1);
  sub_180063F0C(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_180065D00(a1, a3, a4, a2);
  v16 = *(_QWORD *)(a1 + 512);
  v17 = sub_180016F54((__int64)v28, (__int64)&unk_1801C7EC8);
  sub_18004CCE0(v16, &v23, v17);
  sub_18005BFD4(v23, (__int64)&unk_1801C7DC8, *(_BYTE *)(a1 + 1409));
  v18 = sub_180016F54((__int64)v30, (__int64)&unk_1801C8448);
  sub_18004CCE0(v16, &v21, v18);
  sub_18005BFD4(v21, (__int64)&unk_1801C7DC8, *(_BYTE *)(a1 + 1409));
  v19 = sub_180032634(a1, a3);
  sub_180066CF4(a1, a2, v19, a4);
  if ( v22 )
    sub_18001050C((__int64)v22);
  if ( v24 )
    sub_18001050C(v24);
  sub_18002FFC8((__int64)v27);
  return sub_18001EADC((__int64)v29);
}
