/*
 * XREFs of sub_180014610 @ 0x180014610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003F114 @ 0x18003F114 (sub_18003F114.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180014610(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+60h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    unknown_libname_81(&v9, (_QWORD *)(v2 + 32));
    v3 = *(_QWORD *)sub_18001268C(v9, &v13) + 16LL;
    sub_18002867C(v3, v15);
    if ( v14 )
      sub_18001060C(v14);
    sub_180013E0C(v9, &v11);
    v4 = a1[1];
    if ( v4 )
    {
      v5 = v11;
      *(_OWORD *)(v11 + 88) = *(_OWORD *)(v4 + 32);
      *(_QWORD *)(v5 + 104) = *(_QWORD *)(v4 + 48);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v6 = *(_QWORD *)sub_18001268C(v9, &v13);
    v7 = sub_180012444((__int64)v16, (__int64)&unk_1801C4FB8);
    sub_18003F114(v6, v7);
    if ( v14 )
      sub_18001060C(v14);
    if ( v12 )
      sub_18001060C(v12);
    sub_180011044((__int64)v15);
    if ( v10 )
      sub_18001060C(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F1E4(
      retaddr,
      118LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
