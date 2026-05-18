/*
 * XREFs of sub_18005ED5C @ 0x18005ED5C
 * Callers:
 *     sub_180068120 @ 0x180068120 (sub_180068120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 *     sub_18001E97C @ 0x18001E97C (sub_18001E97C.c)
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18005ED5C(_QWORD *a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int16 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 *v12; // r9
  bool v13; // di
  __int64 v14; // rdi
  struct _Mtx_internal_imp_t *v15; // rbx
  _BYTE v17[16]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-31h]
  _BYTE v19[16]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-11h]
  _BYTE v21[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp+1Fh] BYREF

  std::wstring::wstring((__int64)v19, L"Camera.");
  std::wstring::wstring((__int64)v17, L"/Internal/Camera.");
  sub_18001E97C(a2, (__int64)v22, 0LL, v20);
  v4 = 1;
  sub_1800131AC((__int64)v19);
  v6 = sub_1800131AC(v5);
  v13 = 1;
  if ( v7 != v20 || (unsigned int)sub_18001E734(v6, v8, v7) )
  {
    sub_18001E97C(a2, (__int64)v21, 0LL, v18);
    v4 = 3;
    sub_1800131AC((__int64)v17);
    v10 = sub_1800131AC(v9);
    if ( v11 != v18 || (unsigned int)sub_18001E734(v10, v12, v11) )
      v13 = 0;
  }
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    sub_180013228((__int64)v21);
  }
  if ( (v4 & 1) != 0 )
    sub_180013228((__int64)v22);
  if ( v13 )
  {
    v14 = *a1;
    v15 = (struct _Mtx_internal_imp_t *)(*a1 + 1504LL);
    sub_180011C30((__int64)v15);
    sub_18005E200((_QWORD *)(v14 + 1440), (__int64)v21, a2);
    Mtx_unlock(v15);
  }
  sub_180013228((__int64)v17);
  return sub_180013228((__int64)v19);
}
