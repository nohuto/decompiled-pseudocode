/*
 * XREFs of sub_1800CEDDC @ 0x1800CEDDC
 * Callers:
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800D0700 @ 0x1800D0700 (sub_1800D0700.c)
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     unknown_libname_84 @ 0x18001E108 (unknown_libname_84.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 *     sub_1800CDF34 @ 0x1800CDF34 (sub_1800CDF34.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800D010C @ 0x1800D010C (sub_1800D010C.c)
 *     sub_1800D16C0 @ 0x1800D16C0 (sub_1800D16C0.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CEDDC(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  _BYTE v20[32]; // [rsp+28h] [rbp-51h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h]
  _BYTE v23[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp+Fh] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180011C30(a1 + 64);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v23, a2);
  v8 = sub_1800D010C(a1 + 96, v7);
  sub_180013228((__int64)v23);
  v9 = sub_1800131AC(a2);
  if ( (unsigned __int8)sub_1800D17D0(v8, v9) )
  {
    v11 = sub_180012444((__int64)v24, a2);
    v12 = (_DWORD *)sub_1800D16C0(v8, v11);
    v13 = v12;
    if ( *v12 == 5 )
    {
      std::wstring::wstring((__int64)v23, L"Value");
      v14 = sub_1800131AC((__int64)v23);
      if ( (unsigned __int8)sub_1800D17D0(v13, v14) )
      {
        v15 = sub_180012444((__int64)v20, (__int64)v23);
        v16 = (_DWORD *)sub_1800D16C0(v13, v15);
        if ( !*v16 )
        {
          v17 = sub_1800CDF34((__int64)v24, (__int64)v16);
          unknown_libname_84(a3, v17);
          sub_180013228((__int64)v24);
          v18 = (__int64 *)v23;
LABEL_16:
          sub_180013228((__int64)v18);
          v10 = 0;
          goto LABEL_17;
        }
      }
      sub_180013228((__int64)v23);
    }
    else if ( !*v12 )
    {
      sub_180012444((__int64)&v21, (__int64)(v12 + 2));
      unknown_libname_84(a3, (__int64)&v21);
      v18 = &v21;
      goto LABEL_16;
    }
    v10 = 1;
    goto LABEL_17;
  }
  sub_18003ECF8(a1, &v21);
  if ( v21 )
  {
    v10 = sub_1800CEDDC(v21, a2, a3);
    if ( v22 )
      sub_18001060C(v22);
  }
  else
  {
    if ( v22 )
      sub_18001060C(v22);
    v10 = 2;
  }
LABEL_17:
  Mtx_unlock(v6);
  return v10;
}
