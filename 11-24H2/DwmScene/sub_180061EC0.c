/*
 * XREFs of sub_180061EC0 @ 0x180061EC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180032794 @ 0x180032794 (sub_180032794.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_18006406C @ 0x18006406C (sub_18006406C.c)
 *     sub_180064860 @ 0x180064860 (sub_180064860.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180067960 @ 0x180067960 (sub_180067960.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180061EC0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
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
  sub_18001EB4C(
    v29,
    v8,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\viewerengine.cpp",
    1570,
    (__int64)"PreRenderScene",
    (__int64)"PreRenderScene");
  std::string::string(v30, "PreRenderScene");
  v9 = sub_180032548(a1, &v25);
  sub_180015274(&v21, v9);
  sub_18002F414(v27, (__int64)&v21);
  if ( v22 )
    sub_180010644(v22);
  if ( v26 )
    sub_18001060C(v26);
  sub_180011B5C((__int64)v30);
  v10 = sub_180032500(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  sub_180067960(v11, *a3, *a4, v10);
  LOBYTE(v12) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C79D8, v12);
  v14 = v13;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C79F8);
  LOBYTE(v15) = v14;
  sub_1800626E4(a1, a2, v15);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 120LL))(*a3);
  *(_BYTE *)(a1 + 1409) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(
                            v10,
                            &unk_1801C7998,
                            0LL);
  sub_180064860(a1);
  sub_18006406C(a1, *a4, *(unsigned int *)(*(_QWORD *)a2 + 112LL));
  sub_180065E60(a1, a3, a4, a2);
  v16 = *(_QWORD *)(a1 + 512);
  v17 = sub_180017054((__int64)v28, (__int64)&unk_1801C8ED8);
  sub_18004CE40(v16, &v23, v17);
  sub_18005C134(v23, (__int64)&unk_1801C8DD8, *(_BYTE *)(a1 + 1409));
  v18 = sub_180017054((__int64)v30, (__int64)&unk_1801C9458);
  sub_18004CE40(v16, &v21, v18);
  sub_18005C134(v21, (__int64)&unk_1801C8DD8, *(_BYTE *)(a1 + 1409));
  v19 = sub_180032794(a1, a3);
  sub_180066E54(a1, a2, v19, a4);
  if ( v22 )
    sub_18001060C((__int64)v22);
  if ( v24 )
    sub_18001060C(v24);
  sub_180030128((__int64)v27);
  return sub_18001EC3C((__int64)v29);
}
