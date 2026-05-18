/*
 * XREFs of sub_180014510 @ 0x180014510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003EFB4 @ 0x18003EFB4 (sub_18003EFB4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180014510(_QWORD *a1)
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
    v3 = *(_QWORD *)sub_18001258C(v9, &v13) + 16LL;
    sub_18002851C(v3, v15);
    if ( v14 )
      sub_18001050C(v14);
    sub_180013D0C(v9, &v11);
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
    v6 = *(_QWORD *)sub_18001258C(v9, &v13);
    v7 = sub_180012344((__int64)v16, (__int64)&unk_1801C3FA8);
    sub_18003EFB4(v6, v7);
    if ( v14 )
      sub_18001050C(v14);
    if ( v12 )
      sub_18001050C(v12);
    sub_180010F44((__int64)v15);
    if ( v10 )
      sub_18001050C(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F0E4(
      retaddr,
      118LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
