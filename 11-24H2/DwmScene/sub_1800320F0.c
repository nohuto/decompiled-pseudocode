/*
 * XREFs of sub_1800320F0 @ 0x1800320F0
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
 *     sub_18001EB4C @ 0x18001EB4C (sub_18001EB4C.c)
 *     sub_18001EC3C @ 0x18001EC3C (sub_18001EC3C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180030FA4 @ 0x180030FA4 (sub_180030FA4.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_180033DF4 @ 0x180033DF4 (sub_180033DF4.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003573C @ 0x18003573C (sub_18003573C.c)
 *     sub_180036028 @ 0x180036028 (sub_180036028.c)
 *     sub_1800361CC @ 0x1800361CC (sub_1800361CC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800320F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v12; // [rsp+48h] [rbp-51h]
  _BYTE v13[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15[4]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v16[8]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+C0h] [rbp+27h] BYREF

  sub_18002894C((__int64)(a1 + 1), a2);
  sub_1800361CC(a1);
  sub_180030FA4((__int64)a1);
  v3 = unknown_libname_81(&v11, a1 + 58);
  sub_18001EB4C(
    v16,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick");
  std::string::string(v17, "FrameTick");
  v4 = (_QWORD *)sub_180032548(a1, v13);
  sub_180015274(&v11, v4);
  sub_18002F414(v15, (__int64)&v11);
  if ( v12 )
    sub_180010644(v12);
  if ( v14 )
    sub_18001060C(v14);
  sub_180011B5C((__int64)v17);
  sub_180033DF4(a1);
  if ( (unsigned int)sub_1800326D0(a1) > 1 )
  {
    sub_180032634(a1, &v11, 1LL);
    v6 = v11;
    if ( v11 )
    {
      v7 = sub_180032500(a1, 1LL);
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_1801C55F8, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v8);
    }
    if ( v12 )
      sub_18001060C((__int64)v12);
    sub_180036028(a1);
    sub_180035258(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    v9 = sub_180032500(a1, 1LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C5618, 0LL) )
      sub_180032C28(v10);
    sub_1800346A8(a1);
    sub_180034044(a1);
    sub_180030128((__int64)v15);
    sub_18001EC3C((__int64)v16);
    return sub_18003573C(a1);
  }
  else
  {
    sub_180030128((__int64)v15);
    return sub_18001EC3C((__int64)v16);
  }
}
